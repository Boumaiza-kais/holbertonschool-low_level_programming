#include "lists.h"
#include <stdio.h>
/**
  * list_len - Return number of elements of a list
  * @h: header of the list
  * Return: integer i
  */

size_t list_len(const list_t *h)
{
const list_t *ptr = h;
unsigned int i = 0;
for (i = 0 ; ptr != NULL ; i++)
{
ptr = ptr->next;
}
return (i);
}
