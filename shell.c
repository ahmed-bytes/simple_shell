#include "main.h"

/**
* main - Entry point
* @ac: Argument count, number of arguments passed to the program
* @av: Argument vector, an array of the arguments passed to the program
* Return: 0(Success)
*/

int main(void)
{
	char *input, **token_array;
	int i = 0;

	while (1)
	{
		prompt(":)> ");
		input = read_input();
		token_array = tokenize_input(input, " \n");
		/*execute_cmd(token_array);*/
		while(token_array[i] != NULL)
		{
			printf("%s\n", token_array[i]);
			free(token_array[i]);
			i++;
		}
		free(token_array);
		free(input);
	}

	return (0);
}
