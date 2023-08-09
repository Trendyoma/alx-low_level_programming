#include "main.h"
#include <stdlib.h>
/**
 * create_array - main entry point
 * @size: size of array
 * @c: char to be assigned
 * Return: null if zero and pointer if successful
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ptr[a] = c;
	return (ptr);
}
