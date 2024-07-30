#include <unistd.h>
#define Buffer_size 1024
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	static char buffer[Buffer_size];
	static int i;

	if (i >= Buffer_size || c == -1)
	{
		write(1, &buffer, i);
		i = 0;
	}

	if (c != -1)
	{
		buffer[i++] = c;
	}

	return (1);
}
