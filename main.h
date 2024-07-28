#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct funcType - to determine specifier and it's function
 * @t: specifier type
 * @f: pointer to function
 */

typedef struct funcType
{
	char t;
	int (*f)(va_list);
} func_type;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_digit(va_list ptr);

#endif
