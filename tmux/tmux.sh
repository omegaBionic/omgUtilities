#!/bin/sh

SESSION_NAME="main"


# Window 0
tmux new-session -d -s ${SESSION_NAME} -n "bash"
tmux splitw -v -p 79
tmux selectp -t 0
tmux send-keys "htop" C-m 
tmux splitw -h -p 38
tmux send-keys "nvidia-smi -l 1" C-m

# Window 1
tmux new-window -t ${SESSION_NAME}:1 -n "neuroip-test-001"
tmux send-keys "/bin/bash /bin/sshTo.sh 1" C-m
tmux send-keys "/usr/bin/clear" C-m
tmux send-keys "/usr/bin/htop" C-m
tmux splitw -v -p 79
tmux send-keys "/bin/bash /bin/sshTo.sh 1" C-m
tmux send-keys "/usr/bin/clear" C-m
tmux selectp -t 0
tmux splitw -h -p 38
tmux send-keys "/bin/bash /bin/sshTo.sh 1" C-m
tmux send-keys "/usr/bin/clear" C-m
tmux send-keys "/usr/bin/nvidia-smi -l 1" C-m
tmux selectp -t 2

# Window 2
tmux new-window -t ${SESSION_NAME}:2 -n "neuroip-test-002"
tmux send-keys "/bin/bash /bin/sshTo.sh 2" C-m
tmux send-keys "/usr/bin/clear" C-m
tmux send-keys "/usr/bin/htop" C-m
tmux splitw -v -p 79
tmux send-keys "/bin/bash /bin/sshTo.sh 2" C-m
tmux send-keys "/usr/bin/clear" C-m
tmux selectp -t 0
tmux splitw -h -p 38
tmux send-keys "/bin/bash /bin/sshTo.sh 2" C-m
tmux send-keys "/usr/bin/clear" C-m
tmux send-keys "/usr/bin/nvidia-smi -l 2" C-m
tmux selectp -t 2

# Go to first window
tmux select-window -t $session:0

# Attach session
tmux attach-session -t ${SESSION_NAME}
