

# omega PS1 configuration
parse_git_branch() {
	        git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/'
}

is_git_clean() {
	        if [ -d .git ]; then
	                if [ "$(git status --porcelain)" ]; then
	                        echo -n '*'
	                fi
	        fi
}

export PS1="\[\033[01;31m\]:\[\033[01;34m\]\w\[\033[01;33m\$(parse_git_branch)\[\033[01;31m\]\$(is_git_clean)\[\e[00m\]$ "
unset color_prompt force_color_prompt

