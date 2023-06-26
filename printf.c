#include <stdio.h>
#include "print.h"
#include <stdarg.h>
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
