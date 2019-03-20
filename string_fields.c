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

	if (params->zero_flag && !params->minus_flag)
		pad_char = '0';
	if (!r)
	{
		r = 1;
		/* _printf("l:[%d] w:[%d]", i, params->width); */
	}
	while (i++ < params->width)
		*--p = pad_char;
	return (p);
}
