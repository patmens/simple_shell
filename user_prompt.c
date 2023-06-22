#include "header.h"

/**
 * prompt_function-This is tpo display a prompt interface to the user and reads input
 * @ac: arguement counter, counts the number of 
 *         command-line arguements passed to the program.
 * @argv: an array used to access the values of the command-line arguements passed.
 * shell_env: Executable enviroment
 * return: returns 0 on failure.
 */

int main(int ac, char **av, char **shell_env)
{
	if(ac == 1)
	prompt_function(av, shell_env);

	return(0);
}
