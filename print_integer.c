#include "main.h"

/**
 * print_integer - handling the i conversion
 * @num: takes number
 */

int absolute(int num)
{
	if (num < 0)
		return (-1 * num);
	else 
		return (num);
}
int digitcount(int num)
{
	int counter = 0;
	int num2 = num;
	if (num <= 0)
		counter++;
	while (absolute(num2) != 0)
	{
		num2 = num2 /10;
		counter++;
	}
	return (counter);
}


int int_recursion(int num)
{
	unsigned int unii;
	int counter;

	counter = digitcount(num);
	if (num < 0)
	{
		_putchar('-');
		unii = -num;
	}
	else 
		unii = num;
	if (unii >= 10)
		int_recursion(unii / 10);
	_putchar(unii % 10 + '0');
	return (counter);
}
int print_integer(char *format, va_list ptr)
{
	int num = va_arg(ptr, int);
	int number;
	(void)format;

	number = int_recursion(num);
	return (number);
}
