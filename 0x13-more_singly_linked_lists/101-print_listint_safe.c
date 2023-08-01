#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = NULL;
	const listint_t *i = NULL;
	size_t counter = 0;
	size_t new_node;

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;
		current = current->next;
		i = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (current == i)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (counter);
			}
			i = i->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
