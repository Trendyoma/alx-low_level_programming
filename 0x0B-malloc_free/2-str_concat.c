#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concentate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		ptr[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		ptr[a] = s2[b];
		a++, b++;
	}
	ptr[a] = '\0';
	return (ptr);
}
