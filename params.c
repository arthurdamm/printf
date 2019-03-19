#include "holberton.h"

/**
 * clear_params - clears struct fields
 * @params: the parameters struct
 *
 * Return: void
 */
void clear_params(params_t *params)
{
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;

	params->width = 0;

	params->h_modifier = 0;
	params->l_modifier = 0;
}
