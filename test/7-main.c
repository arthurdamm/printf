#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    
    len = printf("Expected:[%p]\n", addr);
    len2 =_printf("Actual:[%p]\n", addr);
    (void)len;
    (void)len2;
    printf("Expected:[%p]\n", 0);
    _printf("Actual:[%p]\n", 0);
    printf("Expected:[%p]\n", LONG_MAX);
    _printf("Actual:[%p]\n", LONG_MAX);
    printf("Expected:[%p]\n", ui);
    _printf("Actual:[%p]\n", ui);


    return (0);
}
