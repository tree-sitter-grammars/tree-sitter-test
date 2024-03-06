vim.treesitter.start(0, "test")

vim.wo.foldmethod = 'expr'
vim.wo.foldexpr = 'v:lua.vim.treesitter.foldexpr()'

local conceals = vim.treesitter.query.parse("test", [[
(test (separator) @dashes)

(header . (separator) @equals.begin)

(header (separator) @equals.end .)
]])

if vim.g.tstest_fullwidth_rules then
    local ns = vim.api.nvim_create_namespace("tstest-conceals")
    local tree = vim.treesitter.get_parser(0, "test"):parse()[1]
    for id, node, _ in conceals:iter_captures(tree:root(), 0) do
        local name = conceals.captures[id]
        local row, col, _, _ = node:range()
        if name == "dashes" then
            vim.api.nvim_buf_set_extmark(0, ns, row, col, {
                virt_text_pos = "overlay",
                virt_text_hide = true,
                virt_text = {{
                    string.rep("-", vim.o.columns),
                    "@punctuation.delimiter"
                }}
            })
        else
            vim.api.nvim_buf_set_extmark(0, ns, row, col, {
                virt_text_pos = "overlay",
                virt_text_hide = true,
                virt_text = {{
                    string.rep("=", vim.o.columns),
                    "@punctuation.delimiter"
                }}
            })
        end
    end
end
