#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (array == NULL || action == NULL || size == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}