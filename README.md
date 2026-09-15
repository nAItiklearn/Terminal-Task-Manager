# C task manager

A small persistant command-line task manager written in C stadard library.

## build 
```sh
make
```
this will cteaye and executable named `task`.

without `make`, compire directly with:
```sh
cc -std=c11 -Wall -Wextra -Wpedantic -O2 -o task main.c task.c storage.c
```

### commands
```sh
./task add "larp whole day"
./task add "skip the gym" --priority high

List taks:
```sh

./task list
./task list --pending
./task list --ccompleted
```

complete a task:
