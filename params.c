#include "holberton.h"

/**
 * init_params - clears struct fields and reset buf
 * @params: the parameters struct
 *
 * Return: void
 */
void init_params(params_t *params)
{
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;

	params->width = 0;

	params->h_modifier = 0;
	params->l_modifier = 0;
}
