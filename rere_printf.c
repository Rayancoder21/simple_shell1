#include "Main.h"
/**
* _rere_printf_shellllo - function that print output
* @message: parameter
* Returns: nothing
*/
void _rere_printf_shellllo(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
