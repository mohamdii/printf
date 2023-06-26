#include "main.h"
#include <unistd.h>
/**
 * print_string - functing that prints string
 * @s: string pointer
 */

void print_string(char *s)
{
	if (s == NULL)
	{
		return;
	}
	while	(*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
