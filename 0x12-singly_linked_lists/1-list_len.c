#include "lists.h"
/**
 * list_len - prints the number of element in a link
 * @h: pointer to the struct
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	int counts;

	while (h->next != NULL)
	{
		counts++;
		h = h->next;
	}
	return (counts);
	
}
