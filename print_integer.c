#include "main.h"

/**
 * print_integer - handling the i conversion
 * @num: takes number
 */

void print_integer(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0) 
	{
		print_integer(num / 10);
	}
	_putchar('0' + (num % 10));
}
