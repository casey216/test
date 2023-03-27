#include "main.h"

/**
 * print_decimal - prints decimal numbers
 *
 * @n: decimal number
 * Return: length of number
 */

int print_decimal(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}

	if (n / 10)
	{
		print_decimal(n / 10);
		i++;
	}

	_putchar(n % 10 + '0');

	return (i - 1);
}
