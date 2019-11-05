#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Print all the elements of a list
  * @h: header of the list
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
const listint_t *p = h;
unsigned int i = 0;
while (p != NULL)
{
printf("%d \n", p->n);
p = p->next;
i++;
}
return (i);
}
