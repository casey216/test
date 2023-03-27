#include "main.h"
/**
 * print_string - prints string followed by new line
 * @str: string variable
 * Return: length of string
 */

int print_string(char *str)
{
	int len;
	
	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len - 2);
}
