#include "Main.h"

/*
 * input_reader - Reads and processes user input.
 *
 * @buffer: Pointer to a character buffer to store the user input.
 * @size: Size of the buffer in bytes.
 *
 * Returns: Nothing.
 */
void input_reader(char *buffer, size_t size)
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
	/* Remove trailing newline character. */
	buffer[strcspn(buffer, "\n")] = '\0';
}
