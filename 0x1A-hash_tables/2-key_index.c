#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	if (size == 0)
		return (0);

	x = hash_djb2(key);
	return (x % size);
}
