#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
void _rere_printf_shellllo(const char *message);
void rere_infinite_prompt(void);
void read_command(char *command, size_t size);
void execute_command(const char *command);
int main(void);

#endif
