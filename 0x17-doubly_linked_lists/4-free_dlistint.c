#include "lists.h"
/**
 * free_dlistint - frees a listint_t list
 * @head: head elem
 *
 * Return: always success
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
