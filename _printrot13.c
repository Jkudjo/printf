#include "main.h"

/**
 * _printrot13 - prints rot3
 * @H: arguments
 *
 * Return: number of characters printed
 *
 */
int _printrot13(va_list H)
{
	int i, j, counter = 0;
	int d = 0;
	char *s = va_arg(H, char *);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char n[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		d = 0;
		for (j = 0; a[j] && !d; j++)
		{
			if (s[i] == a[j])
			{
				counter += _putchar(n[j]);
				d = 1;
			}
		}
		if (!d)
		{
			counter += _putchar(s[i]);
		}
	}
	return (counter);
}
