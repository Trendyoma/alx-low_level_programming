#include "main.h"
/**
 * _memset - entry point
 * @s: pointer to n
 * @n: memory location
 * @b: content of a
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
			return (s);
}
