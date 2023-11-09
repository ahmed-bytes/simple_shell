#include "main.h"

/**
 * tokenize_input - Tokenizes the input passed to the program
 * @input: The string to be tokenized
 * @delim: The delimiters to used
 *
 * Return: An array of the tokens
 */
char *tokenize_input(char *input, char *delim)
{
	char *input_copy, *token_array, *token;
	size_t token_count = 0, i = 0;

	input_copy = strdup(input);

	token = strtok(input_copy, delim);
	while(token != NULL)
	{
		token = strtok(NULL, delim);
		token_count++;
	}
	free(input_copy);

	token_array = malloc((sizeof(char *) * token_count) + 1);
	token = strtok(input, delim);
	while(token != NULL)
	{
		token  = strtok(NULL, delim);
		token_array[i] = token;
		i++;
	}
	token_array[i] = NULL;

	return(token_array);
}
