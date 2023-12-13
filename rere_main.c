#include "Main.h"
/**
* main - entry point
* Return: nothing
**/
int main(void)
{
	char command[120];

	while (true)
	{
		rere_infinite_prompt();
		re_re_input(command, sizeof(command));
		execute_command((command);
	}
	return (0);
}
