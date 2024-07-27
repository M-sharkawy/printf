#include "main.h"

/**
 * print_char - function for character
 *
 * @charachter: charachter
 * @i: integer
 *
 * Return: i
 */

int print_char(va_list ptr)
{
	int i;
	char character;

	character = va_arg(ptr, int);

	i = _putchar(character);
	
	return (i);
}
