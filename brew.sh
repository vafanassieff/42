#!/bin/zsh
rm -rf ~/.brew
export HOMEBREW_CACHE=/tmp/mycache
export HOMEBREW_TEMP=/tmp/mytemp
mkdir /tmp/{mycache,mytemp}
/usr/local/bin/brew update
$HOME/.brew/bin/brew update
$HOME/.brew/bin/brew upgrade
