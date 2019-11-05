#include "lists.h"
#include <stdio.h>

/**
  * listint_len - returns the number of elements in a linked  list
  * @h: header of the list
  * Return: the number of elements linked
  */

size_t listint_len(const listint_t *h)
{
const listint_t *p = h;
unsigned int i = 0;
while (p != NULL)
{
p = p->next;
i++;
}
return (i);
}
