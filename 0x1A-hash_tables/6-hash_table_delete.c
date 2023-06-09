#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table
 *
 * Return: a type void element
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		if (node != NULL)
			free_list(&node);
	}

	free(ht->array);
	free(ht);
	ht->array = NULL;
	ht = NULL;
}

/**
 * free_listint2 - free a linked list
 * @head: the head of the list to be freed
 *
 * Return: a type void
 */

void free_list(hash_node_t **head)
{
	hash_node_t *torm;

	if (head)
	{
		while (*head)
		{
			torm = *head;
			(*head) = (*head)->next;
			free(torm->key);
			free(torm->value);
			free(torm);
		}

		head = NULL;
	}
}
