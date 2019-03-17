#include "holberton.h"

/**
 * print_char - prints character
 * @ap: argument pointer
 *
 * Return: number chars printed
 */
int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_int - prints integer
 * @ap: argument pointer
 *
 * Return: number chars printed
 */
int print_int(va_list ap)
{
	char buf[100];

	buf[99] = 0;
	sprintf(buf, "%d", va_arg(ap, int));
	return (_puts(buf));
}

/**
 * print_float - prints float
 * @ap: argument pointer
 *
 * Return: number chars printed
 */
int print_float(va_list ap)
{
	char buf[100];

	buf[99] = 0;
	sprintf(buf, "%f", va_arg(ap, double));
	return (_puts(buf));
}

/**
 * print_string - prints string
 * @ap: argument pointer
 *
 * Return: number chars printed
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	return (_puts(str));
}

/**
 * print_percent - prints string
 * @ap: argument pointer
 *
 * Return: number chars printed
 */
int print_percent(va_list ap)
{
	(void)ap;
	return (_putchar('%'));
}
