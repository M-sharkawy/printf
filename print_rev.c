#include "main.h"

/**
 * print_rev - print string reversed
 * @ptr: list of arguments
 *
 * Return: (length)
 */

int print_rev(va_list ptr)
{
	int i = 0, length;
	char *str = va_arg(ptr, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
		i++;

	length = 0;
	while (i >= 0)
		length += _putchar(str[--i]);

	return (length);
}
