#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated
 * with a key
 * @ht: hash_table
 * @key: hash_node key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (ht->array[index]->value);
		temp = temp->next;
	}
	return (NULL);
}
