#include "holberton.h"

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
	char *p, *start;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p);
		else
			sum += get_print_func(p, ap);
	}
	/* _putchar('\n'); */
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
}
