#include "list.h"
#include <stdio.h>

/**
 * print_list - Prints a doubly linked list
 * @list: Pointer to the head of the list
*/
void print_list(const listint_t *list)
{
	const listint_t *current = list;

	while (current)
	{
		printf("%d", current->n);
		if (current->next)
			printf(", ");
		current = current->next;
	}
	printf("\n");
}
