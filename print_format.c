#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * _printf - print char and string
  * @format: constant
  * @...: other arguments
  * Return: 0
  */

int _printf(const char *format, ...)
{
	va_list pr;
	char ch = 'Z';

	va_start(pr, format);
	printf("%c\n%s\n", ch, "Hello");
	va_end(pr);

	return (0);
}
/**
  * main - recall _printf
  *
  * Return: 0
  */


int main(void)
{
	_printf("%c %s");
	return (0);

}

