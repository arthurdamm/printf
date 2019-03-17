#include "holberton.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static int i;
	static char buf[BUF_SIZE];

	if (c == -1 || i >= BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	buf[i++] = c;
	return (1);
}
