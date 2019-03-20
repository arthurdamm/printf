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

	if (!r)
	{
		r = 1;
		/* _printf("l:[%d] w:[%d]", i, params->width); */
	}
	while (i++ < params->width)
		*--p = ' ';
	return (p);
}
