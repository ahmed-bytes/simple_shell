#include "main.h"

/**
 * read_input - reads the input froom stdin
 *
 * Return: The input read
*/
char *read_input(void)
{
    char *lineptr = NULL;
	size_t length = 0;
	ssize_t chars_read;

    chars_read = getline(&lineptr, &length, stdin);
		if (chars_read == -1)
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
}