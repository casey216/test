#include "main.h"
#include <stddef.h>
#include <stdarg.h>

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
	int size, i;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);

	if (size < 0)
		return (-1);

	va_start(args, format);

	for (i = 0; i < size; i++)
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++;
			if (format[i] == 'c')
				_putchar(va_arg(args, int));
			if (format[i] == 'd')
				print_decimal(va_arg(args, int));
			if (format[i] == 's')
				print_string(va_arg(args, char *));
			if (format[i] == '%')
				_putchar('%');
		}

	va_end(args);
	return (size);
}
