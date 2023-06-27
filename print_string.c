#include "main.h"
#include <unistd.h>
/**
 * print_string - functing that prints string
 * @format: string pointer
 * @ptr: va_list.
 */

int print_string(char *format, va_list ptr)
{
	int counter;
	char *str = va_arg(ptr, char*);
	
	(void)format;

	if (str == NULL)
	{
		str = "null";
	}
	counter = _puts_string(str);
	return (counter);
}
