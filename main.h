#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_integer(int num);
void print_string(char *s);
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
