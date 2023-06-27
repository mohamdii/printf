#include "main.h"



int _puts_string(char *str)
{
	int counter = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		counter++;
		
	}
	return (counter);
}
