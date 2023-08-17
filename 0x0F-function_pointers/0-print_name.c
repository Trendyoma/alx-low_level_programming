#include "function_pointers.h"
/**
 * print_name - prints name in a string
 * @name: pointer to character of the string
 * @f: pointer to function that prints name
 * Return: string name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
