#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a
 * list_t list
 * @head: the head of the list
 * @str: a pointer-to the string to be added
 *
 * Return: the address of the new element, or NULL if it failed;
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ad = malloc(sizeof(list_t));

	if (ad)
	{
		ad->str = strdup(str);
		ad->len = strlen(str);
		ad->next = *head;

		(*head) = ad;
		return (ad);
	}

	return (NULL);
}
