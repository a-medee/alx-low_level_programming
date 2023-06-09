#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value
 * associated with a key
 * @ht: the hash table to look into
 * @key: the key you to look for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *to_be_returned;

	if (key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);
	if (!ht->array[index]->next)
		return (ht->array[index]->value);

	to_be_returned = get_node_at_index(ht->array[index], key);

	if (to_be_returned)
		return (to_be_returned->value);
	return (NULL);
}

/**
 * get_node_at_index -  a function that returns the nth node of a
 * hash_node_t linked list.
 * @head: a pointer to the first element of our linked list
 * @key: the key
 *
 * Return: if the node does not exist, return NULL, the node otherwise
 */

hash_node_t *get_node_at_index(hash_node_t *head, const char *key)
{
	hash_node_t *firstnode = head, *node_to_be_returned;

	if (head)
	{
		while (head)
		{
			if ((strcmp(head->key, key) == 0))
			{
				node_to_be_returned = head;
				head = firstnode;
				return (node_to_be_returned);
			}
			head = head->next;
		}
		return (NULL);
	}
	return (NULL);
}
