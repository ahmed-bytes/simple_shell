#include "main.h"

/**
 * execute_cmd - Executes the command input by the user
 * @token_array - An array string of the commands passed by the user
 *
 * Return: Nothing
 */
void execute_cmd(char **token_array)
{
	char *command = NULL;
	pid_t child_pid;
	int status, command_len;
	
	child_pid = fork();
	if (child_pid == -1)
	{
        perror("fork failed");
        return;
	}

	if (child_pid == 0)
	{
		if (token_array)
		{
			/* Get the command */
			command_len = strlen("/bin/") + strlen(token_array[0]) + 1;
			command = malloc(sizeof(char) * command_len);
			if(command != NULL)
			{
				strcpy(command, "/bin/");
				strcat(command, token_array[0]);
			}
			else
			{
				perror("malloc failed");
				_exit(EXIT_FAILURE);
			}
			/* execute the command with execve */
			if (execve(command, token_array, environ) == -1)
			{
				perror("Error:");
				_exit(EXIT_FAILURE);
			}
			free(command);
		}
	}
	else
		waitpid(child_pid, &status, 0);
}
