#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all elements of 'list_t' list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c;

	for (c = 0; h; c++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (c);
}
