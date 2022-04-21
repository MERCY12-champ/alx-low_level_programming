#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	size_t i, len;
	char *c;
	list_t *new_node;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new_node = *head;
	c = malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		c[i] = str[i];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(c);
		return (NULL);
	}
	new_node->str = c;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
