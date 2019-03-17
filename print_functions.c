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
	int i = va_arg(ap, int);

	return (print_number(i));
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
 *
 * Return: number chars printed
 */
int print_percent(void)
{
	return (_putchar('%'));
}
