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
	int length = 0, i, j;
	func_type types[] = {
		{'s', print_str},
		{'c', print_char},
		{'\0', NULL}
	};

	if (!format)
	return (-1);

	va_start(ptr, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			length += _putchar(format[i]);
			continue;
		}
		for (j = 0; types[j].t; j++)
		{
			if (format[i + 1] == types[j].t)
			{
				length += types[j].f(ptr);
				i++;
				break;
			} else if (format[i + 1] == '%')
			{
				length += _putchar('%');
			}
		}
		if (!types[j].t)
		length += _putchar('%'), length += _putchar(format[i + 1]), i++;
	}
	va_end(ptr);
	return (length);
}
