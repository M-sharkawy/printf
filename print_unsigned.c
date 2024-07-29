#include "main.h"

/**
 * print_unsigned - function to print unsigned number
 * @ptr: list of arguments
 *
 * Return: (length)
 */

int print_unsigned(va_list ptr)
{
	unsigned int number = va_arg(ptr, unsigned int);
	unsigned int temp = number;
	unsigned int exp;
	int length;
	int digit;

	exp = 1;
	while (temp >= 10)
	{
		exp = exp * 10;
		temp = temp / 10;
	}

	length = 0;
	while (exp > 0)
	{
		digit = number / exp;
		length += _putchar(digit + '0');
		number = number - (digit * exp);
		exp = exp / 10;
	}

	return (length);
}
