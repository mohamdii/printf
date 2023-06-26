#include "print.h"
#include <stdio.h>
void print_string(char *s)
{
	while(*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
