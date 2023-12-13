#include "Main.h"

/**
 * read_command - Reads and processes user input.
 *
 * @command: Pointer to a character buffer to store the user input.
 * @size: Size of the buffer in bytes.
 *
 * Return: Nothing.
 */

void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			_rere_printf_shellllo("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			_rere_printf_shellllo("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
