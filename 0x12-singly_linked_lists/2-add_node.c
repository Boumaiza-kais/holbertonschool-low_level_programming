#include "lists.h"
/**
 * *add_node - function to add node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string input
 * Return: Always Successful
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = NULL;
unsigned int i;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
for (i = 0 ; str[i] != '\0' ; i++)
;
new->len = i;
new->str = strdup(str);
new->next = *head;
*head = new;
return (*head);
}
