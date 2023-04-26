#include "main.h"

/**
* _printuns - print an unsigned number
* @H: arguments.
*
* Return: returns the number of characters printed
*/

int _printuns(va_list H)
{
	char dec[12];
	int i = 0;
	int n;
	int counter = 0;
	unsigned long int u = va_arg(H, unsigned long int);

	while (u)
	{
		n = u % 10;
		dec[i] = '0' + n;
		u /= 10;
		i++;
	}
	while (i--)
	{
		counter += _putchar(dec[i]);
	}
	return (counter);
}
