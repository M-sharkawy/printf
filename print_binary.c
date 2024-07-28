#include "main.h"

/**
 * print_binary - function to print binary numbers
 * @ptr: list of arguments
 *
 * Return: (length)
 */

int print_binary(va_list ptr)
{
	unsigned int ind = va_arg(ptr, int);
	int remainders[32], j, length = 0, rem;

	j = 0;
	while (ind >= 1)
	{
		rem = ind % 2;
		remainders[j] = rem;
		ind /= 2;
		j++;
	}

	j -= 1;
	while (j >= 0)
	{
		length += _putchar((remainders[j]) + '0');
		j--;
	}

	return (length);
}
