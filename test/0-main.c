#include "../holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", _printf("Hello %c%d ZY%fZ %s%e WEW", 'H', 321, 3.14, "lberton"));
    _printf("%%%s%d%e\n", NULL, INT_MIN);
    printf("<%d>\n", _printf("%%%s[%+ d]\n", NULL, -2));
    return (0);
}
