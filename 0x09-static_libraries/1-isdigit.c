#include "main.h"
/**
 * _isdigit - main point of entry
 * @c: numbers from 0 to 9
 * Return: 1 (success) 0 (unsuccessful)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
