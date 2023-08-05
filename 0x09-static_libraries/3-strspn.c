#include "main.h"
#include <string.h>
/**
 * _strspn - main entry point
 * @s: pointer
 * @accept: another pointer
 * Return: c success
 */

unsigned int _strspn(char *s, char *accept)
{
	int c;

	c = strspn(s, accept);
	return (c);
}
