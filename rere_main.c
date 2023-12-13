#include "Main.h"
#include <stdlib.h>
/**
* main - entry point
* @command: parameter
* Return: nothing
**/
int main(void)
{
	char command[120];

	while (true)
	{
		rere_infinite_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
