#include "lists.h"
/**
 * *add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to pointer of list_t struct type
 * @n: int type
 * Return: Always Successful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
