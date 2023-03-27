#include "main.h"

/**
 * print_decimal - prints decimal numbers
 *
 * @n: decimal number
 */

void print_decimal(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_decimal(n / 10);

	_putchar(n % 10 + '0');
}
