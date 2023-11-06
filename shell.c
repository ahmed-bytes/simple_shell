#include "main.h"
#include <sys/wait.h>
/**
* main - DKDKFKFKSK
* @ac: gsajs
* @av: dgksgfkf
* Return: 0 mardt
*/

int main(int ac, char **av)
{
	char *lineptr = NULL;
	size_t length = 0;
	ssize_t chars_read;
	char *prompt = ":)> ";
	int status;

	while (1)
	{
		write(1, prompt, 4);
		chars_read = getline(&lineptr, &length, stdin);
		if (chars_read == -1)
		{
			perror("Failled to getline\n");
			return (-1);
		}
		execve("/bin/ls", av, NULL);
		wait(&status);
	}

	return (0);
}
