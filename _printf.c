#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 *
 * @format: character string. It is composed of
 * zero or more directives.
 *
 * Return: The number of char printed.
 */

int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list lst;
	interface ids[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'%', _print_mod},
		{'i', _print_int},
		{'d', _print_int},
		{'b', _print_binary},
		{'\0', NULL}
	};
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(lst, format);
	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			i++;
			for (; format[i] != '\0'; i++)
			{
				for (j = 0; ids[j].id != '\0'; j++)
					if (format[i] == ids[j].id)
					{
						count += ids[j].fn(lst);
						break;
					}
				if (ids[j].id)
					break;
			}
			if (format[i] == '\0')
				return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}

	va_end(lst);
	return (count);
}
