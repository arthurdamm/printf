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
