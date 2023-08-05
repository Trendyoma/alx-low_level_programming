#include "main.h"
#include <string.h>
/**
 * _strcat - main entry
 * @dest: destination memory
 * @src: source memory
 * Return: 0 successful
 */

char *_strcat(char *dest, char *src)
{
	int i, lent1, lent2;

	lent1 = strlen(dest);
	lent2 = strlen(src);

	for (i = 0; i <= lent2; i++)
	{
		dest[lent1 + i] = src[i];
	}
	return (dest);
}
