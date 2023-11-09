#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

/* function prototypes */
void prompt(char *str);
char *read_input(void);
char *tokenize_input(char *input, char *delim);

#endif /* MAIN_H */
