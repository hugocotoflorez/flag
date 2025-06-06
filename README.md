# FLAG

> ***Just a small header-only library to handle flags***

Init flags. Needed to use following functions.
```c
void flag_set(int *argc, char **argv[]);
```

Both funtions return 0 if any flag is set. Otherwise, 1 is returned (and
value is set to the next argument after the flag, if using the value func).
```c
int flag_get_value(char **value, char* flag1 [, char* flag2 [, ...]]);
int flag_get(char* flag1 [, char* flag2 [, ...]]);
```

