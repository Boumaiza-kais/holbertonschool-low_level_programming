#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free nodes
 * @head: pointer to nodes
 * Return: Always Successful
 */

void free_listint(listint_t *head)
{
listint_t *next;
while (head != NULL)
{
next = head->next;
free(head);
head = head->next;
}
}
