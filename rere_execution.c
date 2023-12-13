#include "Main.h"
#include <sys/wait.h>
#include <sys/types.h>
/**
 * execute_command - function
 * @command: parameter
 * Return: nothing
 *
 */


void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
	_rere_printf_shellllo("Error forking process.\n");
	exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
	char *args[128];
	int arg_count = 0;
	char *token = strtok((char *)command, " ");

	while (token != NULL)
	{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
	}
	args[arg_count] = NULL;
	execvp(args[0], args);
	_rere_printf_shellllo("Error executing command.\n");
	exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
