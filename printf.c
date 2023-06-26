#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - creates a printf like funtion
 * @format: the string
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list args;

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
			}	
		}
		format++;
	}
	return (1);
}
