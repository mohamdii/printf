
#include <unistd.h>

/**
 * _putchar- writing characters
 * @c: character to be written to the output
 * Return: the number of bytes written
 * **/
int _putchar(char c)
{
	static int counter;
	static char buff[1024];

	if (c == -1)
	{
		counter = 0;
		return (-1);
	}
	if (c == -2 || counter == 1024)
	{
		write(1, buff, counter);
		counter = 0;
	}
	if (c != -1 && c != -2)
	{
		buff[counter] = counter;
		counter += 1;
		
		return(1);
	}
	return (0);
}
