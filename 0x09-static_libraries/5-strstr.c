#include "main.h"
#include <string.h>
/**
 * _strstr - main entry point
 * @haystack: main string to be scanned
 * @needle: the substring to be searched for in haystack
 * Return: pointer to the found substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *b;

	b = strstr(haystack, needle);
	return (b);
}
