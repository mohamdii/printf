#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
int _printf(char *format, ...);
int _putchar(char c);
int _puts_string(char *str);
int print_char(char *format, va_list ptr);
int print_integer(char *format, va_list ptr);
int print_string(char *format, va_list ptr);
int (*match(char *format))(char *format, va_list);
/**
 * struct funcstruct - sturct that has a pointer and a pointer function
 * @p: points at percentage if any
 * @f: a pointer that points at a function.
 * Return: an integer number.
 */

typedef struct prints
{
	char *p;
	int (*f)(char *format, va_list);
}printtype;

#endif
