#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash tables
 * @size: size of sorted hash table
 * Return: pointer to sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_t;
	unsigned long int i;

	sh_t = malloc(sizeof(shash_table_t));
	if (sh_t == NULL)
		return (NULL);

	sh_t->size = size;
	sh_t->array = malloc(sizeof(shash_node_t *) * size);
	if (sh_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sh_t->array[i] = NULL;

	sh_t->shead = NULL;
	sh_t->stail = NULL;
	return (sh_t);
}

/**
 * shash_table_set - adds element to sorted hash table
 * @ht: pointer to hash table
 * @key: key to add cannot be empty
 * @value: value with inserted key
 * Return: 0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - get value associated with key
 * @ht: pointer to hash table
 * @key: key to get value
 * Return: NULL or key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new_node = ht->shead;
	while (new_node != NULL && strcmp(new_node->key, key) != 0)
		new_node = new_node->snext;

	return ((new_node == NULL) ? NULL : new_node->value);
}

/**
 * shash_table_print - print the hash table using the sorted linked list
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	if (ht == NULL)
		return;

	temp_node = ht->shead;
	printf("{");
	while (temp_node != NULL)
	{
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		temp_node = temp_node->snext;
		if (temp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash tables key/value pairs
 * in reverse order using the sorted linked list
 * @ht: pointer to sorted hast table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	if (ht == NULL)
		return;

	temp_node = ht->stail;
	printf("{");
	while (temp_node != NULL)
	{
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		temp_node = temp_node->sprev;
		if (temp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete hash table
 * @ht: pointer to hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *temp, *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(head->array);
	free(head);
}
