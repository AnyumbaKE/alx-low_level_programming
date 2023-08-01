#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: address of the node where the loop starts
 * Return: Always 0
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *last = head;

	while (first != NULL && first->next != NULL)
	{
		last = last->next;
		first = first->next->next;

		if (last == first)
		{
			first = head;
			while (first != last)
			{
				first = first->next;
				last = last->next;
			}
			return (first);
		}

	}
	return (NULL);
}
