#include "main.h"

/**
 * _printf - printing function to stdout
 * @format: constant string
 *
 * Return: (length) which is the size of format
 * otherwise - (-1)
 */

int _printf(const char *format, ...)
{
va_list ptr;
	int length, i, j;
	func_type types[] = {
		{.t = 's', .f = print_str},
		{.t = 'c', .f = print_char},
		{.t = '%', .f = print_percent},
		{'\0', NULL}
	};

	va_start(ptr, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(ptr);
		return (-1);
	}

	i = 0;
	length = 0;
	for (; format[i]; i++)
	{
		if (format[i] != '%')
		{
			length += _putchar(format[i]);
			continue;
		}
		j = 0;
		while (types[j].t != '\0')
		{
			if (format[i + 1] == types[j].t)
			{
				length += types[j].f(ptr);
				i++;
				break;
			}
			j++;
		}
	}
	va_end(ptr);
	return (length);
}
