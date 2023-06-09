#include <stdarg.h>
#include <stdio.h>

int main(void) {
    /* your code here */
    return 0;
}




int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                char c = (char)va_arg(args, int);
                putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char*);
                while (*str)
                {
                    putchar(*str);
                    str++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                count++;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}

