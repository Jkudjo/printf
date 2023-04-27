#include "main.h"

/**
  * _printrev - Prints a string in reverse
  * @H: arguments
  *
  * Return: void
  */

int _printrev(va_list H)
{
	int c = 0, counter = 0;
	char *s = va_arg(H, char *);

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		counter += _putchar(s[c]);
	}

	return (counter);
}
