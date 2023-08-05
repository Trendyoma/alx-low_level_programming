#include "main.h"
/**
 * _isalpha - check for all alphabets
 * @c: character to be checked
 * Return: 1 (successful) and 0 (unsuccessful)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
