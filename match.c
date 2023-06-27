#include "main.h"

/**
 * match - matches the functions
 * @format: input str.
 * Return: pointer
 */

int (*match(char *format))(char *format, va_list)
{
	int i = 0;

	printtype matcher[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%d", print_integer},
		{"%i", print_integer},
		{NULL, NULL}
	};
	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	while (matcher[i].p)
	{
		if (format[1] == matcher[i].p[1])
			return (matcher[i].f);
		i++;
	}
	return (NULL);
}
