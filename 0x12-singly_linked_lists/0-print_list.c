#include "lists.h"
#include <stdio.h>
/**
  * print_list - Print all the elements of a list
  * @h: header of the list
  * Return: An unsigned integer, number of nodes
  */

size_t print_list(const list_t *h)
{
const list_t *ptr = h;
unsigned int i = 0;
while (ptr != NULL)
{
if (ptr->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
i++;
}
return (i);
}
