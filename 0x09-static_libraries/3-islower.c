#include "main.h"
/**
 * _islower - check for lowercases
 * @c: character to be checked
 * Return: 1 (successful) and 0 (unsuccessful)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
