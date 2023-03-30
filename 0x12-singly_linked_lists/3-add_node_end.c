#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at the end of a list_t list.
 * @head: head of list_t
 * @str: a pointer to the string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a = malloc(sizeof(list_t));
	list_t **ad = head;
	list_t *first = *head;

	if (a)
	{
		while ((*ad))
		{
			if ((*ad)->next == NULL)
			{
				break;
			}
			*ad = (*ad)->next;
		}
		a->next = NULL;
		a->str = strdup(str);
		a->len = strlen(str);
		if ((*head) == NULL)
			*head = a;

		else
		{
			(*ad)->next = a;
			(*head) = first;
		}
		return (a);
	}
	return (NULL);
}
