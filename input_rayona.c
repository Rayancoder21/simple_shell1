#include "Main.h"

/**
 * re_re_input - Reads and processes user input.
 *
 * @buffer: Pointer to a character buffer to store the user input.
 * @size: Size of the buffer in bytes.
 *
 * Return: Nothing.
 */
void re_re_input(char *buffer, size_t size)
{
	if (!fgets(buffer, size, stdin))
	{
		if (feof(stdin))
		{
			_rere_printf_shellllo("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			_rere_printf_shellllo("Error reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	buffer[strcspn(buffer, "\n")] = '\0';
}
