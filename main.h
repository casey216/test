#ifndef FILE_MAIN
#define FILE_MAIN

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifier - interface for printing
 * @id: the character, which identifies the type of
 * the argument
 * @fn: function to run if id matches
 */
typedef struct specifier
{
	char id;
	int (*fn)(va_list);
} interface;

int _printf(const char *format, ...);
int _print_char(va_list ls);
int _print_mod(va_list ls);
int _print_string(va_list ls);
int _print_int(va_list ls);
int _print_binary(va_list ls);


#endif
