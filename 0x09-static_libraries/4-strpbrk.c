#include "main.h"
#include <string.h>
/**
 * _strpbrk - main point of entry
 * @s: pointer
 * @accept:second pointer
 * Return: value successful
 */

char *_strpbrk(char *s, char *accept)
{
	char *c;

	c = strpbrk(s, accept);
	return (c);
}
