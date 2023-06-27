
#include <unistd.h>

/**
 * _putchar- writing characters
 * @c: character to be written to the output
 * Return: the number of bytes written
 * **/
int _putchar(char c)
{
	write(1, &c, 1);
}
