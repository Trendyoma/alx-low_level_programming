#include "main.h"
/**
 * _puts - main entry point
 * @str: string to stdout
 * Return: 0 successful
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
