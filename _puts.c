#include "main.h"

/**
 * _puts - prints a string
 * @H: argument.
 *
 * Return: returns the number printed
 */

int _puts(va_list H)
{
	char buffer[1024];
	int counter = 0, ind = 0;
	char *s = va_arg(H, char *);

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		buffer[ind++] = *s++;
		counter++;
		if (ind == 1024)
		{
			write(1, buffer, ind);
			ind = 0;
		}
	}

	if (ind > 0)
	{
		write(1, buffer, ind);
	}
	return (counter);
}
