#include "header.h"
#include <sys/wait.h>

/**
* prompt_function- displays a prompt interface to the user and reads input
* command-line arguements passed to the program.
* @arv: Array used to access the values of command-line arguements passed.
* @shell_env: Executable enviroment
* Return: returns 0 on failure.
*/

void prompt_function(char **arv, char **shell_env)
{
	char *line = NULL;
	int i;
	int status;
	size_t n = 0;
	ssize_t numb;
	char *argv[2];
	pid_t child_pid;

	while (1)
	{
		printf("userprompt_interface$"); /*The shell prompt*/
		numb = getline(&line, &n, stdin);
		if (numb == -1)
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		i = 0;
		while (line[i])
		{
			if (line[i] == '\n')
			line[i] = 0;
			i++;
		}
		argv[0] = line;
		argv[1] = NULL;
		child_pid = fork();

		if (child_pid == -1)
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			if (execve(argv[0], arv, shell_env) == -1)
			printf("%s: No such file or directory exit,sorry\n", arv[0]);
		}
		else
		wait(&status);
	}
}
