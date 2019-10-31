#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: pointer to first node of the list
 * @str: pointer to string
 * Return: always Successful
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *new, *tmp;
new = malloc(sizeof(list_t));
if (str == NULL)
return (NULL);
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
new->len = i;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
