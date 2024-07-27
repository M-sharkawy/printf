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
	int (*f)();
} func_type;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list);
int print_char(va_list);

#endif
