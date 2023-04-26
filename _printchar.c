#include "main.h"

/**
 * _printchar - print a char.
 * @H: argument.
 * Return: 1.
 */

int _printchar(va_list H)
{
	_putchar(va_arg(H, int));
	return (1);
}
