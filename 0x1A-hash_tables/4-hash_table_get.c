#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value or NULL if not found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int x;


	if (!ht || !key)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[x];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
