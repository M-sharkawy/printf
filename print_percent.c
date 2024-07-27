#include "main.h"

/**
 * print_percent - function to print 37 asci sign
 * @ptr: list of parameters
 *
 * Return: (1) which is size of '%'
 */

int print_percent(va_list ptr)
{
	char cs;

	cs = va_arg(ptr, int);
	_putchar('%');
	return (1);
}
