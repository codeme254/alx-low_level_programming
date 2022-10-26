#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index of the key for a table of size @size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long idx;

	idx = hash_djb2(key);
	return (idx % size);
}
