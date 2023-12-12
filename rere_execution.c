#include "Main.h"
#include <sys/wait.h>
#include <sys/types.h>
#define EXIT_COMMAND "exit"

/**
*rere_executeCommand - function to execute command
*@rere: parameter
*Return: nothing
*/

void rere_executeCommand(const char *rere)
{
	pid_t pid = fork();

	if (strcmp(rere, EXIT_COMMAND) == 0)
	{
		exit(EXIT_SUCCESS);
	}
	if (pid == 0)
	{
		int argCountRere = 0;
		char *args[200];
		char *token_Arg = strtok((char *)rere, " ");

		while (token_Arg != NULL)
		{
			args[argCountRere++] = token_Arg;
			token_Arg = strtok(NULL, " ");
		}
		args[argCountRere] = NULL;
		execvp(args[0], args);
		_rere_printf_shellllo("./shell: No such file or directory\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == -1)
	{
		_rere_printf_shellllo("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
