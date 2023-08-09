#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in *s
 * @s: pointer to string to be evaluated
 * Return: number of words(successful)
 */
int count_word(char *s)
{
	int tio, c, d;

	tio = 0;
	d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			tio = 0;
		else if (tio == 0)
		{
			tio = 1;
			d++;
		}
	}

	return (d);
}
/**
 * **strtow - splits string into words
 * @str: string
 *
 * Return: pointer to strings (Success) or null
 */
char **strtow(char *str)
{
	char **ptrptr, *p;
	int i, j = 0, len = 0, words, k = 0, start, stop;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	ptrptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptrptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				stop = i;
				p = (char *) malloc(sizeof(char) * (k + 1));
				if (p == NULL)
					return (NULL);
				while (start < stop)
					*p++ = str[start++];
				*p = '\0';
				ptrptr[j] = p - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	ptrptr[j] = NULL;

	return (ptrptr);
}
