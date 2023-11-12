#include "main.h"

/**
 * prompt - Displays the prompt to stdout
 * @str: String to be used as prompt
 *
 */
void print_string(char *str)
{
	write(1, str, strlen(str));
}
