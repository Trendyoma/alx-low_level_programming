#include "main.h"
#include <string.h>
/**
 * _strncat - main entry point
 * @dest: destination memory
 * @src: source memory
 * @n: number of element
 * Return: 0 successful
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
