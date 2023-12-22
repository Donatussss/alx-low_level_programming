#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - a function that creates a
 * hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t **arr = malloc(sizeof(hash_node_t *) * size);
	unsigned int fr = 0;

	if (new_table == NULL)
	{
		free(new_table);
		fr = 1;
	}
	if (arr == NULL)
	{
		free(arr);
		fr = 1;
	}

	if (fr)
		return (NULL);

	new_table->array = arr;
	new_table->size = size;

	for (fr = 0; fr < size; fr++)
	{
		arr[fr] = NULL;
	}

	return (new_table);
}
