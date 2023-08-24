# Minishell

Minishell is a simple shell implementation, akin to your own miniature version of bash. The project aims to enhance your understanding of processes, file descriptors, and various shell functionalities.

## Features

- **Command Prompt**: Displays a prompt for input when waiting for new commands.
- **Command History**: Supports a working command history.
- **Executable Launch**: Searches and launches the right executable based on the PATH variable or specified path.
- **Quoting**: Handles single and double quotes to prevent interpreting metacharacters.
- **Redirections**: Supports input (`<`) and output (`>`) redirection, here documents (`<<`), and append output (`>>`).
- **Pipes**: Implements pipes (`|`) for connecting the output of one command to the input of another.
- **Environment Variables**: Handles expansion of environment variables (`$VAR`).
- **Exit Status**: Supports expanding `$?` to the exit status of the most recently executed foreground pipeline.
- **Built-in Commands**: Implements various built-in commands: `echo`, `cd`, `pwd`, `export`, `unset`, `env`, and `exit`.
- **Signal Handling**: Responds to signals such as ctrl-C, ctrl-D, and ctrl-\ in interactive mode.
- **Memory Management**: Addresses potential memory leaks in the code.

## Getting Started

1. **Clone the Repository**: `git clone https://github.com/bahimzabir/minishell.git`
2. **Build the Minishell**: `make`.
3. **Run Minishell**: `./minishell`

## Usage

Minishell operates as a basic shell. It supports commands, arguments, pipes, redirections, and built-in commands. Here are a few examples:

```shell
$ echo "Hello, World!"
Hello, World!

$ ls -l | grep file.txt
-rw-r--r-- 1 user user     0 Aug 24 10:00 file.txt

$ export MY_VAR=42
$ echo $MY_VAR
42

$ cd /path/to/directory
$ pwd
/path/to/directory

$ exit
```
