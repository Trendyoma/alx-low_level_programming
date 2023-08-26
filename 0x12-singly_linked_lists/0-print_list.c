#include "lists.h"
/**
 * print_list - function that prints the element in a node
 * @h: ponter to a structure
 * Return: number of elements in a node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h->str)
	{
		printf("[%d] (%s)\n", 0, "nil");
		count++;
	}
	while (h)
	{
		if (h->str == NULL)
			h = h->next;
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
		}
	}
	return (count);
}
