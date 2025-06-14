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
    -- add your plugins here
    {'windwp/nvim-autopairs',
    event = "InsertEnter",
    config = true},
		{
    "yorumicolors/yorumi.nvim",
    lazy = false, -- make sure we load this during startup if it is your main colorscheme
    priority = 1000, -- make sure to load this before all the other start plugins
    config = function()
      -- load the colorscheme here
      vim.cmd([[colorscheme yorumi]])
    end,
  },
  },
  install = { colorscheme = { "habamax" } },
  checker = { enabled = true },
})
