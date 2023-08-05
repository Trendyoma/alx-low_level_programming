#include "main.h"
#include <stdio.h>
/**
 * main - point of entry
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
