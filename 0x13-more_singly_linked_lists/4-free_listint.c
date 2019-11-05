#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free nodes
 * @head: pointer to nodes
 * Return: Always Successful
 */

void free_listint(listint_t *head)
{
while (head != NULL)
{
free(head);
head = head->next;
}
}
