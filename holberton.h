#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

/**
 * struct specifier - Struct token
 *
 * @specifier: format token
 * @f: The function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list);
} specifier_t;

/* _put.c module */
int _puts(char *str);
int _putchar(int c);

/* print_functions.c module */
int print_char(va_list ap);
int print_int(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

/* number.c module */
int print_number(int n);
char *convert(unsigned long int num, int base, short l);
int print_unsigned(va_list ap);
int print_address(va_list ap);

/* specifier.c module */
int (*get_specifier(char *s))(va_list ap);
int get_print_func(char *s, va_list ap);

/* convert_number.c module */
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_binary(va_list ap);
int print_octal(va_list ap);

/* simple_printers.c module */
int print_from_to(char *start, char *stop);

/* _prinf.c module */
int _printf(const char *format, ...);

#endif
