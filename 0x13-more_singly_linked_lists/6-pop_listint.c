#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: 1st node of the linked list
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int head_data;

	if (*head == NULL)
		return (0);

	head_data = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (head_data);
}
