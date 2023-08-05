#include "main.h"
#include <string.h>
/**
 * _strncpy - main entry point
 * @dest: destination memory
 * @src: source memory
 * @n: number of elements
 * Return: 0 successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
		return (dest);
}
