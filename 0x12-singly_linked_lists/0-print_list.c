#include "lists.h"
/**
 * print_list - function that prints the element in a node
 * @h: ponter to a structure
 * Return: number of elements in a node
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (!h->str)
		printf("[%d] (%s)\n", 0, "(nil)");
	while (h != NULL)
	{
		count++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
