#include "hash_tables.h"

/**
 * hash_table_t *hash_table_create - a function that creates
 * a hash table
 * @size: the size of the hash table
 *
 * Return: a pointer to the newly created hash table
 * NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table)
	{
		table->size = size;
		table->array = malloc(table->size * sizeof(hash_node_t *));

		if (table->array)
		{
			for (i = 0; i < table->size; i++)
			{
				table->array[i] = NULL;
			}
			return (table);
		}
		return (NULL);
	}
	return (NULL);
}
