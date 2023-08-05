#include "main.h"
/**
 * _abs - finding the absolute integers
 * @h: caharacter to work with
 * Return: 0 (successful)
 */

int _abs(int h)
{
	if (h < 0)
	{
		int abs_val;

		abs_val = h * -1;
		return (abs_val);
	}
	return (h);
}
