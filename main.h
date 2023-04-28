#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - match the conversion specifiers for the printf function
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _printint(va_list H);
int _puts(va_list H);
int _printbinary(va_list H);
int _printhex(va_list H);
int _printHEXA(va_list H);
int _printoct(va_list H);
int _printuns(va_list H);
int _printchar(va_list H);
int _printpercent(void);
int printhexa(unsigned int n);
int printhex(unsigned long int n);
int _printaddr(va_list H);
int _printnonpr(va_list H);
int _printrev(va_list H);
int _printrot13(va_list H);


#endif
