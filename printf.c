#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>
/**
 * _printf - creates a printf like funtion
 * @format: the string
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 's')
			{
				char *s = va_arg(args, char*);
				print_string(s);
				count += strlen(s);
			}
			if (*format == 'c')
			{
				int c = va_arg(args, int);
				_putchar(c);
				count++;
			}	
		}
		format++;
	}
	return (count + 1);
}
