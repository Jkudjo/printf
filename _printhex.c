#include "main.h"

/**
* _printhex - prints an hexadcimal number
* @H: argume.:.:
* Return: counter
*/
int _printhex(va_list H)
{
	int i, counter = 0;
	int *arr;
	unsigned long int n = va_arg(H, unsigned long int);
	unsigned long int aux = n;

	while (n / 16 != 0)
	{
		n /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = aux % 16;
		aux /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
