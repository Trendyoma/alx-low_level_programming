#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int multiple;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multiple = num1 * num2;
		printf("%d\n", multiple);
		return (0);

}
