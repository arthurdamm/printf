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

/**
 * convert - converter function, a clone of itoa
 * @num: number
 * @base: base
 * @l: lowercase or not
 * Return: string
 */
char *convert(unsigned long int num, int base, short l)
{
	static char *array;
	static char buffer[50];
	char *ptr;

	array = l ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do	{
		*--ptr = array[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * print_unsigned - prints unsigned integer numbers
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_unsigned(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);

	(void)params;
	return (_puts(convert(n, 10, 0)));
}



/**
 * print_address - prints address
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_address(va_list ap, params_t *params)
{
	unsigned long int n = va_arg(ap, unsigned long int);
	char *prefix = params->plus_flag ? "+0x" : "0x";
	if (!n)
		return (_puts("(nil)"));
	return (_puts(str_concat(prefix, convert(n, 16, 1))));
}
