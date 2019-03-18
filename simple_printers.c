#include "holberton.h"


/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 *
 * Return: number bytes printed
 */
int print_from_to(char *start, char *stop)
{
	int sum = 0;

	while (start <= stop)
		sum += _putchar(*start++);
	return (sum);
}

/**
 * print_rev - prints string in reverse
 * @ap: string
 *
 * Return: number bytes printed
 */
int print_rev(va_list ap)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);

	for (len  = 0; *str; str++)
		len++;
	str--;
	for (; len > 0; len--, str--)
		sum += _putchar(*str);
	return (sum);
}
