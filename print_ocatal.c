#include "main.h"

/**
 * print_ocatal - function to print octal number
 * @ptr: list of argumanets
 *
 * Return: (length)
 * otherwise - (0)
 */

int print_ocatal(va_list ptr)
{
	unsigned int number = va_arg(ptr, unsigned int), temp;
	int *array;
	int i, length = 0, rem;

	if (number == 0)
	{
		length += _putchar('0');
		return (length);
	}

	temp = number;
	i = 0;
	while (temp > 0)
	{
		temp = temp / 8;
		i++;
	}

	array = (int *)malloc(sizeof(int) * i);

	if (array == NULL)
		return (0);

	i = 0;
	while (number > 0)
	{
		rem = number % 8;
		number = number / 8;
		array[i++] = rem;
	}

	while (i > 0)
	{
		i--;
		length += _putchar(array[i] + '0');
	}

	free(array);
	return (length);
}
