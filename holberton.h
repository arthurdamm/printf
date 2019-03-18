#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define FLAGS "+ #"

#define BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

/**
 * struct parameters - parameters struct
 *
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 */
typedef struct parameters
{
	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int h_modifier : 1;
	unsigned int l_modifier	: 1;

} params_t;

/**
 * struct specifier - Struct token
 *
 * @specifier: format token
 * @f: The function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

/* _put.c module */
int _puts(char *str);
int _putchar(int c);

/* print_functions.c module */
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);

/* number.c module */
int print_number(int n);
char *convert(unsigned long int num, int base, short l);
int print_unsigned(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);

/* specifier.c module */
int (*get_specifier(char *s))(va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);

/* convert_number.c module */
int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);

/* simple_printers.c module */
int print_from_to(char *start, char *stop);
int print_rev(va_list ap, params_t *params);

/* string_mallo.c module */
char *str_concat(char *s1, char *s2);

/* _prinf.c module */
int _printf(const char *format, ...);

#endif
