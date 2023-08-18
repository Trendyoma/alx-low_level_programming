#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print numbers
 * @separator: string between numbers
 * @n: number of integers
 * Return: value of string and integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(str, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
