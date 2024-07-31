#include "main.h"

/**
 * print_rev - print string reversed
 * @ptr: list of arguments
 *
 * Return: (length)
 */

int print_rev(va_list ptr)
{
	int i = 0, length = 0;
	char *str = va_arg(ptr, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
		i++;

	while (i >= 0)
		length += _putchar(str[--i]);

	return (length);
}
