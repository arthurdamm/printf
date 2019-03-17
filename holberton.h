#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct token - Struct token
 *
 * @token: format token
 * @f: The function associated
 */
typedef struct token
{
	char *token;
	int (*f)(va_list);
} token_t;

int _putchar(char c);
int _puts(char *str);

int print_char(va_list ap);
int print_int(va_list ap);
int print_float(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

int get_print_func(char *s, va_list ap);
void _printf(const char *format, ...);

#endif