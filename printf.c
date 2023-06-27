#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - creates a printf like funtion
 * @format: the string
 * Return: integer
 */
int _printf(char *format, ...)
{
	va_list ptr;
	int count = 0, (*printtype)(char *, va_list);
	char e[3];

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	e[3] = '\0';
	while(*(format + 0))
	{
		if (*(format + 0) == '%')
		{
			printtype = match(format);
			if (printtype)
			{
				e[0] = '%';
				e[1] = *(format + 1);
				count += printtype(e, ptr);
			}
			else if (*(format + 1) != '\0')
			{
				count += _putchar('%');
				count += _putchar(*(format + 1));
			}
			else
			{
				count += _putchar('%');
				break;
			}
			format ++;
			format ++;
		}
		else
		{
			count += _putchar(*(format + 0));
			format ++;
		}
	}

	va_end(ptr);
	return (count);
}
