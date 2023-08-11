#include "main.h"
/**
 * string_nconcat - to join two strings with n bytes
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!str)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
