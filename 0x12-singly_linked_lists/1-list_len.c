#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node_count;

	node_count = 0;
	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
