#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: The head node
 * @idx: The index
 * @n: The integer data of the new node
 * Return: Always 0
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head && !idx == 0)
	{
		*head = node;
		return (node);
	}

	if (!*head || idx == 0)
	{
		free(node);
		return (NULL);
	}

	while (i < (idx - 1))
	{
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	node->next = temp->next;
	temp->next = node;

	return (node);
}
