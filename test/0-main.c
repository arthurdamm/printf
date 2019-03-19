#include "../holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int elen, alen;
	_printf("%%%%%++  +#   ##    d\n", "abc");
	 printf("%%%%%++  +#   ##    d\n", "abc");

	elen = printf("Expected   : % % %d\n", 3);
	alen = _printf("Actual     : % % %d\n", 3);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);


	return (0);
}
