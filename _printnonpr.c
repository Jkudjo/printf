#include "main.h"
/**
 * _printnonpr - print non printable characters
 * @H: argument.
 * Return: the length of a string.
 */

int _printnonpr(va_list H)
{
	char *str;
	int i, counter = 0;
	int c;

	str = va_arg(H, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			c = str[i];
			if (c < 16)
			{
				_putchar('0');
				counter++;
			}
			counter += printhexa(c);
		}
		else
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
