#include "main.h"
/**
 * print_string - prints string followed by new line
 * @str: string variable
 */

void print_string(char *str)
{
	while (*(str) != '\0')
	{
		_putchar(*str);
		str++;
	}
}
