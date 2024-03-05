local query = [[
(test
  (header
    (name)
    (attributes
      . ; skip over non-language attributes
      (attribute
        !language)*
      . ; select only the first language attribute
      (attribute
        language: (parameter) @injection.language)))
  (input) @injection.content)

((test
  (output) @injection.content)
  (#set! injection.language "query"))

((test
  (header
    [
      (attributes
        (attribute
          !language))
      ((name)
        .
        (separator))
    ])
  (input) @injection.content)
  (#set! injection.language "%s"))
]]

vim.filetype.add {
    extension = {
        tst = 'tstest'
    },
    pattern = {
        ['.+/test/corpus/.+%.txt'] = 'tstest'
    }
}

local function set_injection(bufnr)
    for dir in vim.fs.parents(vim.api.nvim_buf_get_name(bufnr)) do
        local grammar_json = vim.fs.joinpath(dir, 'src', 'grammar.json')
        if vim.fn.filereadable(grammar_json) == 1 then
            local file = assert(io.open(grammar_json, 'r'))
            local _, name = file:read('l', 'l')
            vim.treesitter.query.set(
                'test', 'injections',
                query:format(name:sub(12, #name - 2))
            )
            file:close()
            break
        end
    end
end

vim.api.nvim_create_autocmd('FileType', {
    pattern = 'tstest',
    callback = function(args)
        if vim.b[args.buf].tstest_dynamic_injection then
            set_injection(args.buf)
        end
        vim.treesitter.start(args.buf, 'test')
    end
})
