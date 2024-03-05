local injections = [[
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

local conceals = [[
(test (separator) @dashes)

(header . (separator) @equals.begin)

(header (separator) @equals.end .)
]]

local function set_injection(bufnr)
    for dir in vim.fs.parents(vim.api.nvim_buf_get_name(bufnr)) do
        local grammar_json = vim.fs.joinpath(dir, 'src', 'grammar.json')
        if vim.fn.filereadable(grammar_json) == 1 then
            local file = assert(io.open(grammar_json, 'r'))
            local _, name = file:read('l', 'l')
            vim.treesitter.query.set(
                'test', 'injections',
                injections:format(name:sub(12, #name - 2))
            )
            file:close()
            break
        end
    end
end

local function conceal_separators(bufnr, conceal)
    local ns = vim.api.nvim_create_namespace('tstest-conceals')
    local tree = vim.treesitter.get_parser(bufnr, 'test', {}):parse()[1]
    local index, lengths = 0, {}
    if conceal == 'short' then
        local query = vim.treesitter.query.parse('test', [[(header (name) @name)]])
        for _, node, _ in query:iter_captures(tree:root(), bufnr) do
            local _, _, _, col = node:range()
            table.insert(lengths, col)
        end
    end
    local query = vim.treesitter.query.parse('test', conceals)
    for id, node, _ in query:iter_captures(tree:root(), bufnr) do
        local length = vim.o.columns
        local name = query.captures[id]
        local row, col, _, _ = node:range()
        if name == 'dashes' then
            if conceal == 'short' then
                length = lengths[index] or 3
            end
            vim.api.nvim_buf_set_extmark(bufnr, ns, row, col, {
                virt_text_pos = 'overlay',
                virt_text_hide = true,
                virt_text = {{
                    string.rep('-', length),
                    '@punctuation.delimiter'
                }}
            })
        else
            if name == 'equals.begin' then
                index = index + 1
            end
            if conceal == 'short' then
                length = lengths[index] or 3
            end
            vim.api.nvim_buf_set_extmark(bufnr, ns, row, col, {
                virt_text_pos = 'overlay',
                virt_text_hide = true,
                virt_text = {{
                    string.rep('=', length),
                    '@punctuation.delimiter'
                }}
            })
        end
    end
end

vim.filetype.add {
    extension = {
        tst = 'tstest'
    },
    pattern = {
        ['.+/test/corpus/.+%.txt'] = 'tstest'
    }
}

vim.api.nvim_create_autocmd('FileType', {
    pattern = 'tstest',
    callback = function(args)
        if vim.g.tstest_dynamic_injection then
            set_injection(args.buf)
        end
        if vim.treesitter.language.get_lang('tstest') == nil then
            vim.treesitter.start(args.buf, 'test')
            vim.treesitter.language.register('test', 'tstest')
        end
        local conceal = vim.g.tstest_conceal_separators
        if conceal ~= nil and conceal ~= 'off' then
            local winid = vim.fn.bufwinid(args.buf)
            vim.wo[winid].conceallevel = 2
            conceal_separators(args.buf, conceal)
        end
    end
})
