#include "lists.h"

/**
 * list_len - returns the number of elements in the list
 * @h: singly linked list
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{
	size_t c;
{
	for (c = 0; h; c++)
		h = h->next;
}
	return (c);
}
