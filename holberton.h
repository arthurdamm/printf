#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_SIZE 1024
#define BUF_FLUSH -1

/**
 * struct token - Struct token
 *
 * @token: format token
 * @f: The function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list);
} specifier_t;

int _putchar(int c);
int _puts(char *str);

int print_char(va_list ap);
int print_int(va_list ap);
int print_string(va_list ap);
int print_percent(void);

int print_number(int n);

int get_print_func(char *s, va_list ap);
int _printf(const char *format, ...);
char *convert(unsigned long int num, int base, short l);
int print_octal(va_list ap);
int print_unsigned(va_list ap);
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_binary(va_list ap);
int print_address(va_list ap);

#endif
