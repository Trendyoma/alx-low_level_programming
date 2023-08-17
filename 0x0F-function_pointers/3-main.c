#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int p;
	int argv1;
	int argv2;
	int result;
	int (*sign)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[3]);

	sign = get_op_func(argv[2]);
	if (!sign)
	{
		printf("Error\n");
		 exit(99);
	}
	p = *argv[2];

	if ((p == '/' || p == '%') && argv2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = sign(argv1, argv2);

	printf("%d\n", result);

	return (0);
}
