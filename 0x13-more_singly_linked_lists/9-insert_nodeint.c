#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node at a
 * given position.
 * @head: a pointer to the first node of a listint_t list
 * @idx: is the index of the list where the new node should be added
 * @n: the integer value of the node to be added
 *
 * description -  a function that inserts a new node whose value is n at a idx
 * if possible
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = (unsigned int)listint_len(*head);
	listint_t *nodeidx = malloc(sizeof(listint_t)), *beforenode, *afternode;

        if  ((*head) && (idx == 0) && nodeidx)
	{
		nodeidx->next = (*head);
		nodeidx->n = n;
		(*head) = nodeidx;
		return (nodeidx);
	}
        if  ((*head) && (idx <= size) && nodeidx)
	{
		afternode = get_nodeint_at_index(*head, idx);
		beforenode = get_nodeint_at_index(*head, idx - 1);

		nodeidx->n = n;
		nodeidx->next = afternode;
		beforenode->next = nodeidx;

		return (nodeidx);
	}

	return (NULL);
}

/**
 * get_nodeint_at_index -  a function that returns the nth node of a
 * listint_t linked list.
 * @head: a pointer to the first element of our linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL, the node otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, size = (unsigned int)listint_len(head);
	listint_t *firstnode = head, *node_to_be_returned;

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
 * listint_len - return the number of elements in a linked list
 * @h: a type listint_t variable whose elements are  to be counted
 *
 * Return: a type size_t value
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 0, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
