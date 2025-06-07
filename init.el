;Emacs-Configuration

;;Removing-GUI-Elements!
(tool-bar-mode 0)
(menu-bar-mode 0)
(scroll-bar-mode 0)

;;Optimizing-StartUp!
(push '(menu-bar-lines . 0) default-frame-alist)
(push '(tool-bar-lines . 0) default-frame-alist)
(push '(vertical-scroll-bars . 0) default-frame-alist)
(setq inhibit-splash-screen t)
(setq use-file-dialog nil)

;;Recitification-Modes!
(electric-pair-mode 1)
(setq display-line-numbers-type 'relative)
(global-display-line-numbers-mode t)

;;Removing-Jargon-Modes!
(setq auto-save-default nil)
(setq make-backup-files nil)
(setq ring-bell-function 'ignore)
(setq extended-command-history nil)

;;Appearance!
(set-face-attribute 'default nil :family "Cascadia Code" :height 120)
(load-theme 'wheatgrass t)

;;Plugin-Initiation!
(require 'package)
(add-to-list 'package-archives '("melpa" . "https://melpa.org/packages/") t)
(package-initialize)

(custom-set-variables
 '(package-selected-packages '(evil)))
(custom-set-faces
 )

;;EVIL!
(use-package evil :init :config (evil-mode 1))
