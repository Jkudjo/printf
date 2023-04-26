#include "main.h"

/**
 * _printbinary - covert unsigned integer to binary
 * @H: argument
 * Return: value of printed number
 */
int _printbinary(va_list H)
{
	int c = 0;
	int counter = 0;
	int i, a = 1, b;
	unsigned int n = va_arg(H, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			c = 1;
		if (c)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}
