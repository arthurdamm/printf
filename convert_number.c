#include "holberton.h"

/**
 * print_hex - prints unsigned hex numbers in lowercase
 * @n: the number
 *
 * Return: bytes printed
 */
int print_hex(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (_puts(convert(n, 16, 1)));
}

/**
 * print_hex - prints unsigned hex numbers in uppercase
 * @n: the number
 *
 * Return: bytes printed
 */
int print_HEX(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (_puts(convert(n, 16, 0)));
}

/**
 * print_binary - prints unsigned binary number
 * @n: the number
 *
 * Return: bytes printed
 */
int print_binary(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (_puts(convert(n, 2, 0)));
}

/**
 * print_octal - prints unsigned octal numbers
 * @n: the number
 *
 * Return: bytes printed
 */
int print_octal(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (_puts(convert(n, 8, 0)));
}
