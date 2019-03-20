#include "holberton.h"

/**
 * init_params_and_buf - clears struct fields and reset buf
 * @params: the parameters struct
 * @buf: the buffer
 *
 * Return: void
 */
void init_params_and_buf(params_t *params, char *buf)
{
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;

	params->width = 0;

	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)buf;
}
