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
	specifier_t specifiers[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"%", print_percent},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_address},
		{NULL, NULL}
	};
	int i = 0;

	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i].specifier[0])
		{
			return (specifiers[i].f(ap));
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
	/* _putchar('\n'); */
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
}
