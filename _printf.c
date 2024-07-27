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
		{'s', print_str},
		{'c', print_char},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(ptr, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	i = 0;
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
				continue;
			}
			j++;
		}
	}

	return (length);
}
