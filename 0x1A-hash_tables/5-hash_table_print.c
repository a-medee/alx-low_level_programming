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

	if (!ht)
		printf("{}\n");
	else
	{
		printf("{");
                for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				printf("'%s': ", ht->array[i]->key);
				printf("'%s', ", ht->array[i]->value);

				if (ht->array[i]->next)
				{
					print_listint(ht->array[i]);
				}
			}
		}
		printf("\b\b}\n");
	}
}

/**
 * print_listint - a function that prints all the elements of a hash_node_t list.
 * @h: a variable of type list_t, the h whose elements will be printed
 *
 * Return: the number of node successfully printed
 */

void print_listint(const hash_node_t *h)
{
	while (h)
	{
		printf("%s': ", h->key);
		if (h->next->next!= NULL)
			printf("%s, ", h->value);
		if (h->next == NULL)
			printf("%s", h->value);
		h = h->next;
	}
}
