#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Print all the elements of a list
  * @h: header of the list
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
unsigned int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
