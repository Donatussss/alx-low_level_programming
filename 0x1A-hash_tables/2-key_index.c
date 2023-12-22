#include "hash_tables.h"

/**
 * key_index - gets index of key/value
 * @key: key to get index
 * @size: size of array of hash table
 *
 * Return: index of array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
