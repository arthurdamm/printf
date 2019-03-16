#include "holberton.h"

/**
 * print_number - using only _putchar
 * @n: the integer to print
 *
 * Return: bytes printed
 */
int print_number(int n)
{
	int i, p, c = 0;

	if (n < 0)
		c += _putchar('-');
	for (p = 0, i = 1000000000; i > 0; i /= 10)
	{
		int d = (n / i) % 10;

		d = d < 0 ? -d : d;
		if (d || p || i == 1)
		{
			c += _putchar(d + '0');
			p++;
		}

	}
	return (c);
}
