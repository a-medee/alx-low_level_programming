#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element
 * to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: is the value associated with the key.
 *
 * Return: 1 if succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned long int _keyindex;

	if (node && ht)
	{
		if (strlen(key) == 0)
			return (0);

		_keyindex = key_index((const unsigned char *)key, ht->size);

		if (!ht->array[_keyindex])
		{
			node->key = strdup(key);
			node->value = strdup(value);
			node->next = NULL;
			ht->array[_keyindex] = node;

			return (1);
		}
		else
		{
			node = add_node(&ht->array[_keyindex], key, value);
			if (node)
			{
				ht->array[_keyindex] = node;
				return (1);
			}
			return (0);
		}
	}

	return (0);
}

/**
 * add_node - function that adds a new node at the beginning of a
 * hash_node_t list
 * @head: the head of the list
 * @key: is the key
 * @value: is the value associated with the key @key
 *
 * Return: the address of the new element, or NULL if it failed;
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *ad = malloc(sizeof(hash_node_t));

	if (ad)
	{
		ad->key = strdup(key);
		ad->value = strdup(value);
		ad->next = *head;

		(*head) = ad;
		return (ad);
	}

	return (NULL);
}
