#include "header.h"

/**
 * main- displays a prompt interface to the user and reads input
 * @ac: arguement counter, counts the number of
 * command-line arguements passed to the program.
 * @*arv: array used to access the values of command-line arguements passed.
 * @shell_env: Executable enviroment
 * Return: returns 0 on failure.
 */

int main(int ac, char **arv, char **shell_env)
{
	if (ac == 1)
	prompt_function(arv, shell_env);
	return (0);
}
