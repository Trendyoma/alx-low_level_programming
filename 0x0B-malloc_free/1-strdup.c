#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - this will duplicate string to new memory space location
 * @str: char pointer
 * Return: null if failed anf pointer if successful
 */
char *_strdup(char *str)
{
	char *ptr;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	ptr = malloc(sizeof(char) * (a + 1));

	if (ptr == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		ptr[b] = str[b];

	return (ptr);
}
