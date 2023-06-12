#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print -  a function that prints a hash table.
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int count = non_empty_node_count(ht);

	if (!count)
		printf("{}\n");
	if (ht && count)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				printf("'%s': ", ht->array[i]->key);
				if (count - 1 > 0)
					printf("'%s', ", ht->array[i]->value);
				else
					printf("'%s'", ht->array[i]->value);
				if (ht->array[i]->next)
				{
					print_listint(ht->array[i]->next);
					if (count - 2 > 0)
						printf(", ");
				}
				count--;
			}
		}
		printf("}\n");
	}
}

/**
 * print_listint - a function that prints all the elements of a
 * hash_node_t list.
 * @h: a variable of type list_t, the h whose elements will be printed
 *
 * Return: the number of node successfully printed
 */

void print_listint(const hash_node_t *h)
{
	while (h)
	{
		printf("'%s': ", h->key);
		printf("'%s'", h->value);
		h = h->next;
	}
}

/**
 * non_empty_node_count - return the number of elements in a linked list.
 * @ht: a type hash_table_t variable whose elements are  to be counted
 *
 * Return: a type size_t value
 */

unsigned long non_empty_node_count(const hash_table_t *ht)
{
	unsigned long count = 0, i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			count++;
	}
	return (count);
}
