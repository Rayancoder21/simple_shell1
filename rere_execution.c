#include "Main.h"
#include <sys/wait.h>
#include <sys/types.h>

/*
*Rere_executeCommand - function to execute command
*Return: nothing
*/
void Rere_executeCommand(const char *command)
{
	pid_t pid = fork();

	if (pid == 0)
	{
		int argCountRere = 0;
		char *args[200];
		char *token_Arg = strtok((char *)command, " ");

		while (token_Arg != NULL)
		{
			args[argCountRere++] = token_Arg;
			token_Arg = strtok(NULL, " ");
		}
		args[argCountRere] = NULL;
		execvp(args[0], args);
		_rere_printf_shellllo("Error_command\n");
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
