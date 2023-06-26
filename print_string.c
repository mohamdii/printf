#include "main.h"
#include <unistd.h>
void print_string(char *s)
{
	while(*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
