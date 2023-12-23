#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table
 * @key: key of the hash node
 * @value: value of the hash node
 * Return: 1 if success 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;
	unsigned long int new_index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	new_index = key_index((const unsigned char *)key, ht->size);
	i = new_index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
		i++;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = value_copy;
	new_node->next = ht->array[new_index];
	ht->array[new_index] = new_node;
	return (1);
}
