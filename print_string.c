#include "main.h"
#include <unistd.h>
/**
 * print_string - functing that prints string
 * @s: string pointer
 */

void print_string(char *format, va_list ptr)
{
	int counter;
	char *str = va_arg(ptr, char*);
	void(format);

	if (str == NULL)
	{
		return;
	}
	counter = _puts_string(str);
	return (counter);
}
