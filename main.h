#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

/* Function prototypes */
void print_string(char *str);
char *read_input(void);
char **tokenize_input(char *input, char *delim);
void execute_cmd(char **token_array);

/* Global environmoent variable */
extern char **environ;

#endif /* MAIN_H */
