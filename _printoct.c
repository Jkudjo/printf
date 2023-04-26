#include "main.h"

/**
* _printoct - converts an unsigned int to octal
* @H: arguments.
*
* Return: returns the number of characters printed
*/

int _printoct(va_list H)
{
	char oct[12];
	int i = 0;
	int counter = 0;
	int n;
	unsigned int o = va_arg(H, unsigned int);

	while (o)
	{
		n = o % 8;
		oct[i] = '0' + n;
		o /= 8;
		i++;
	}
	while (i--)
	{
		counter += _putchar(oct[i]);
	}
	return (counter);
}
