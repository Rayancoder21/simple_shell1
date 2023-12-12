#include "Main.h"
/*
* _rere_printf_shellllo - function that print output
* Returns: nothing
*/
void _rere_printf_shellllo(const char *my_rere)
{
	write(STDOUT_FILENO, my_rere, strlen(my_rere));
}
