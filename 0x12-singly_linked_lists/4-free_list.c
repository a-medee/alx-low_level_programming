#include "lists.h"
#include <stdlib.h>

/**
 * free_list - that frees a list_t list
 * @head: the head of the list to be freed
 *
 * Return: a type void
 */

void free_list(list_t *head)
{
	list_t *torm;

	if(head)
	{
		while(head)
		{
			torm = head;
			head = head->next;
			free(torm->str);
			free(torm);
		}

	}
}
