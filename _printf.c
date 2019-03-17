#include "holberton.h"

/**
 * get_print_func - finds the format func
 * @s: the format string
 * @ap: argument pointer
 *
 * Return: the number of bytes printed
 */
int get_print_func(char *s, va_list ap)
{
	token_t tokens[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (tokens[i].token)
	{
		if (*s == tokens[i].token[0])
		{
			return (tokens[i].f(ap));
		}
		i++;
	}
	return (0);
}

/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int sum = 0;
	va_list ap;
	char *p;

	va_start(ap, format);

	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		p++;
		sum += get_print_func(p, ap);
	}
	printf("\n");
	va_end(ap);
	return (sum);
}
