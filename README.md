# shellC
A shell written by me in C++

Mini project for University

I used system calls to kernel and tried to avoid the system() function.
The calls relies on moving the current process from user space to kernel space.
Unfortunately it does not use parallel processes.

Available commands:

halt: exit shell
see all files and directories in current directory
spath: see default path of executables of default shell
back: get back one directory in the tree
sdir: see current directory
cdir: go to a specific directory: cdir name/of/path


         
