#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint - function to free nodes
 * @head: pointer to nodes
 * Return: Always Successful
 */

void free_listint(listint_t *head)
{
listint_t *p = NULL;
while (head != NULL)
{
p = head->next;
free(head);
head = p;
}
}
