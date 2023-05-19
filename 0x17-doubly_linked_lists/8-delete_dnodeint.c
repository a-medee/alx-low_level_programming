#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index  - a function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: the head of the list to be freed
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * and returns the head node’s data (n).
 * Return: a type int value, 1 if successful, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int size = (unsigned int)dlistint_len(*head);
	dlistint_t *torm = get_dnodeint_at_index(*head, index);
	dlistint_t **p = head;

	if ((*head) && (index <= size))
	{
		while ((*p) != torm)
			p = &(*p)->next;

		*p = torm->next;
		free(torm);
		return (1);
	}

	return (-1);
}

/**
 * get_dnodeint_at_index -  a function that returns the nth node of a
 * listint_t linked list.
 * @head: a pointer to the first element of our linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL, the node otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, size = (unsigned int)dlistint_len(head);
	dlistint_t *firstnode = head, *node_to_be_returned;

	if (head && (index <= size))
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
		node_to_be_returned = head;
		head = firstnode;
		return (node_to_be_returned);
	}

	return (NULL);
}

/**
 * dlistint_len - returns the number of elements in a
 * linked dlistint_t list.
 * @h: a head to our doubly linked list
 *
 * Return: the number of nodes in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	ssize_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
