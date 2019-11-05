#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to head node
 * Return: Always success
 */

int pop_listint(listint_t **head)
{
listint_t *p;
int n;

if (head == NULL || *head == NULL)
return (0);
p = *head;
n = p->n;
*head = p->next;
free(p);
return (n);
}
