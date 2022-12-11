#include <stdio.h>

// Structure for a node of a double-linked list
typedef struct dlistint_s
{
  int n;
  struct dlistint_s *prev;
  struct dlistint_s *next;
} dlistint_t;

// Function that prints all the elements of a double-linked list
size_t print_dlistint(const dlistint_t *h)
{
  // Check if the list is empty
  if (h == NULL)
  {
    return (0);
  }

  // Count the number of nodes in the list
  size_t count = 0;

  // Iterate over the list and print each element
  const dlistint_t *current = h;
  while (current != NULL)
  {
    printf("%d\n", current->n);
    current = current->next;
    count++;
  }

  return (count);
}
