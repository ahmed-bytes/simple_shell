#include "main.h"

/**
* main - Entry point
* @ac: Argument count, number of arguments passed to the program
* @av: Argument vector, an array of the arguments passed to the program
* Return: 0(Success)
*/

int main(int ac, char **av)
{
	char *input, token_array;

	while (1)
	{
		prompt(":)> ");
		input = read_input();
		token_array = tokenize_input(input, " \n\t");
		//execute_cmd(token_array);
		printf("%s", input);
		//execve("/bin/ls", av, NULL);
	}

	return (0);
}
