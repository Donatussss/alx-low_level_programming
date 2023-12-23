#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, printed = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (printed)
					printf(", ");
				else if (!printed)
					printed = 1;
				printf("'%s':'%s'", temp->key,
					temp->value);
				temp = temp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
