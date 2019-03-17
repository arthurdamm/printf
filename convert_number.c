#include "holberton.h"

/**
 * print_hex - prints unsigned hex numbers in lowercase
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_hex(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);

	(void)params;
	return (_puts(convert(n, 16, 1)));
}

/**
 * print_HEX - prints unsigned hex numbers in uppercase
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_HEX(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);

	(void)params;
	return (_puts(convert(n, 16, 0)));
}

/**
 * print_binary - prints unsigned binary number
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);

	(void)params;
	return (_puts(convert(n, 2, 0)));
}

/**
 * print_octal - prints unsigned octal numbers
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_octal(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);

	(void)params;
	return (_puts(convert(n, 8, 0)));
}
