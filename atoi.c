#include "holberton.h"

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * _str_copy_from_back - copies chars from back
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to dest buffer
 */
char *_str_copy_from_back(char *dest, char *src)
{
	int i = 0, c = 0;

	while (*src)
	{
		src++;
		i++;
	}
	if (i)
	{
		c = 1;
		dest++;
	}
	while (i-- >= 0)
		*dest-- = *src--;
	if (c)
		dest++;
	return (dest);
}

