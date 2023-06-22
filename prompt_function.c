#include "header.h"
#include <sys/wait.h>

/**
  * Thi is the Prompt_function
  */

void prompt_function(char **av, char **shell_env)
{
char *string = NULL;
int i, status;
size_t n = 0;
ssize_t numb;
char *argv[] = {NULL, NULL};
pid_t child_pid;

while(1)
    {
	    printf("userpromt_interface$ ");
	    numb = getline(&string, &n, stdin);
	    if(numb == -1)
	    {
             free(string);
	     exit(EXIT_FAILURE);
	    }
	    i =0;
	    while(string[i])
	    {
            if(string[i] == '\n');
	    string[i] = 0;
	    i++;
	    }

	    argv[0] = string;
	    child_pid = fork();
	    
	    if(child_pid == -1)
	    {
            free(string);
	    exit(EXIT_FAILURE);
	    }

	    if(child_pid == 0)
	    {
             if(execve(argv[0], argv, shell_env) == -1)
		     printf("%s: No such file or directory exit,sorry\n", av[0]);
	    }
	    else 
	   
		    wait(status);
	    }
    }
}
