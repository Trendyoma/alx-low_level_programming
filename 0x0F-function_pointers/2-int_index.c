#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: size of the array
 * @array: pointer to array of integer
 * @cmp: pointer to function
 * Return: -1 if NULL and 0 if successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
		return (b);
	}
	return (-1);
}
