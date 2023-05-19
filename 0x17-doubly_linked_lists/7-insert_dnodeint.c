#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position.
 * @head: a head to our doubly linked list
 * @idx: the place to insert into
 * @n: the value to be inserted
 *
 * description - a function that inserts a n at idx into head.
 * Return: a dlistint element which is the newly inserted element
 * NULL, if something goes wrong
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
				     int n)
{
	unsigned int size;
	dlistint_t *nodeidx = malloc(sizeof(dlistint_t)), *beforenode, *afternode;

	if ((head == NULL) && (idx == 0) && nodeidx)
	{
		nodeidx->next = NULL;
		nodeidx->prev = NULL;
		nodeidx->n = n;
		head = &nodeidx;
		return (nodeidx);
	}
	if ((*head) && (idx == 0) && nodeidx)
	{
		nodeidx->n = n;
		nodeidx->next = (*head);
		nodeidx->prev = NULL;

		(*head) = nodeidx;
		return (nodeidx);
	}
	size = (unsigned int)dlistint_len(*(head));
	if  ((*head) && (idx <= size) && nodeidx)
	{
		afternode = get_dnodeint_at_index(*head, idx);
		beforenode = get_dnodeint_at_index(*head, idx - 1);

		nodeidx->n = n;
		nodeidx->next = afternode;
		nodeidx->prev = beforenode;
		afternode->prev = nodeidx;
		beforenode->next = nodeidx;

		return (nodeidx);
	}

	return (NULL);

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
