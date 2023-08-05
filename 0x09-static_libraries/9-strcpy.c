#include "main.h"
/**
 * _strcpy - main point of entry
 * @src: value
 * @dest: destination
 * Return: 0 success
 */

char *_strcpy(char *dest, char *src)
{
	int g;

	for (g = 0; src[g] != '\0'; g++)
	{
		dest[g] = src[g];
	}
	dest[g++] = '\0';
	return (dest);
}
