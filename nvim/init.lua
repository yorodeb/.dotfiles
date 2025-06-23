-- Editor Configuration
local option = vim.opt

option.number = true
option.relativenumber = true
option.ignorecase = true
option.smartcase = true
option.hlsearch = false
option.wrap = true
option.breakindent = true
option.tabstop = 2
option.shiftwidth = 2
option.expandtab = false
option.cursorline = true
option.splitbelow = true
option.splitright = true
option.clipboard = "unnamedplus"

-- Plugin Manager

local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not (vim.uv or vim.loop).fs_stat(lazypath) then
  local lazyrepo = "https://github.com/folke/lazy.nvim.git"
  local out = vim.fn.system({ "git", "clone", "--filter=blob:none", "--branch=stable", lazyrepo, lazypath })
  if vim.v.shell_error ~= 0 then
    vim.api.nvim_echo({
      { "Failed to clone lazy.nvim:\n", "ErrorMsg" },
      { out, "WarningMsg" },
      { "\nPress any key to exit..." },
    }, true, {})
    vim.fn.getchar()
    os.exit(1)
  end
end
vim.opt.rtp:prepend(lazypath)

vim.g.mapleader = " "
vim.g.maplocalleader = "\\"

require("lazy").setup({
  spec = {
    {'windwp/nvim-autopairs',
    event = "InsertEnter",
    config = true},
		{"yorumicolors/yorumi.nvim", lazy = false, priority = 1000, 
    config = function()
      vim.cmd([[colorscheme yorumi]])
    end,
  },
  },
  install = { colorscheme = { "habamax" } },
  checker = { enabled = true },
})
