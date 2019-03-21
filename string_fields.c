#include "holberton.h"

/**
 * add_width - adds the width to this string
 * @p: pointer to char buffer
 * @params: params struct
 *
 * Return: pointer to char buffer
 */
char *add_width(char *p, params_t *params)
{
	static int r;
	unsigned int i = _strlen(p);
	char pad_char = ' ';
	int neg = (*p == '-');

	if (params->zero_flag && !params->minus_flag)
		pad_char = '0';
	if (neg && i < params->width && pad_char == '0')
		p++;
	else
		neg = 0;
	if (!r)
	{
		r = 1;
		/* _printf("l:[%d] w:[%d]", i, params->width); */
	}
	while (i++ < params->width)
		*--p = pad_char;
	if (neg)
		*--p = '-';
	return (p);
}

/**
 * get_precision - gets the precision from the format string
 * @p: the format string
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: new pointer
 */
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
}
