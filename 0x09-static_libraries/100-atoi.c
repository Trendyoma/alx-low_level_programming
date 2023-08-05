#include "main.h"

/**
 * _atoi - main entry converts a string to an integer
 * @s: string to be coverted to integer
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, d, g, len, h, digit;

	a = 0;
	g = 0;
	d = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && h == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			g = g * 10 + digit;
			h = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			h = 0;
		}
		a++;
	}

	if (h == 0)
		return (0);
	return (g);
}
