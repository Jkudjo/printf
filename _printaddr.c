#include "main.h"

/**
 * _printaddr - print an hexadecimal number
 * @H: argument.
 * Return: counter
 */
int _printaddr(va_list H)
{
	void *ptr;
	char *str = "(nil)";
	long int c;
	int b;
	int i;

	ptr = va_arg(H, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	c = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = printhex(c);
	return (b + 2);
}
