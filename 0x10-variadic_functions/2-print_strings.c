#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function to print strings
 * @separator: string in between string
 * @n: number of strings
 * Return: value of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *ptr;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
