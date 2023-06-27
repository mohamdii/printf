#include "main.h"

/**
 * print_char - function that prints a char
 * @ptr: a valist
 * @format: a string
 * Return: int.
 */
int print_char(char *format, va_list ptr)
{
	int x = va_arg(ptr, int);

	(void)format;
	_putchar(x);
	return(1);
}
