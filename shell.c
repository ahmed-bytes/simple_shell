#include "main.h"

/**
* main - Entry point
* @ac: Argument count, number of arguments passed to the program
* @av: Argument vector, an array of the arguments passed to the program
* Return: 0(Success)
*/

int main(int ac, char **av)
{


	char *input;

	while (1)
	{
		prompt();
		input = read_input();

		printf("%s", input);
		//execve("/bin/ls", av, NULL);
	}

	return (0);
}
