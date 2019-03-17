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
			str = NULL_STRING;

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

/**
 * print_S - custom format specifier
 * @ap: argument pointer
 *
 * Return: number chars printed
 */
int print_S(va_list ap)
{
	char *str = va_arg(ap, char *);
	char *hex;
	int sum = 0;

	if ((int)(!str))
		return (_puts(NULL_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			sum += _putchar('\\');
			sum += _putchar('x');
			hex = convert(*str, 16, 0);
			if (!hex[1])
				sum += _putchar('0');
			sum += _puts(hex);
		}
		else
		{
			sum += _putchar(*str);
		}
	}
	return (sum);
}
