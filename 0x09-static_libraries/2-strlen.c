#include "main.h"
/**
 * _strlen - main entry point
 * @s: character char
 * Return: 0 success
 */

int _strlen(char *s)
{
	int lg = 0;

	while (*s != '\0')
	{
	lg++;
	s++;
	}
	return (lg);
}
