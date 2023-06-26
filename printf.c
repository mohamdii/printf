#include "main.h"
#include <stdarg.h>
#include <stdio.h>
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

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for ( ; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == 's')
			{
				char *s = va_arg(args, char*);

				print_string(s);
				count += strlen(s);
			}
			else if (*format == 'c')
			{
				int c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else
			{
				return (-2);
				
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
	}
	va_end(args);
	return (count);
}
