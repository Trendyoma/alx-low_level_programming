#include "main.h"
/**
 *  _isupper - main entry point
 *  @c: uppercase
 *  Return: 1 (letter is upercase) 0(lowercase)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
