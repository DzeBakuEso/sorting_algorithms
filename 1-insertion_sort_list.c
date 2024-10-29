#include "list.h"
#include <stdio.h>

/**
 * swap_nodes - Swap two nodes in a doubly linked list
 * @list: Pointer to the head of the list
 * @node1: First node to swap
 * @node2: Second node to swap
*/
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
    if (node1->prev)
        node1->prev->next = node2;
    if (node2->next)
        node2->next->prev = node1;

    node1->next = node2->next;
    node2->prev = node1->prev;

    node2->next = node1;
    node1->prev = node2;

    if (node2->prev == NULL)
        *list = node2;
    else
        node2->prev->next = node2;

    if (node1->next)
        node1->next->prev = node1;
}

/**
 * insertion_sort_list - Sort a doubly linked list of integers
 * @list: Pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;
    while (current)
    {
        temp = current->prev;
        while (temp && temp->n > current->n)
        {
            swap_nodes(list, temp, current);
            print_list(*list);
            temp = current->prev;
        }
        current = current->next;
    }
}
