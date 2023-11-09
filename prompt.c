#include "main.h"

/**
 * prompt - Displays the prompt to stdout
 * @str: String to be used as prompt
 *
 */
void prompt(char *str)
{
	write(1, str, strlen(str));
}
