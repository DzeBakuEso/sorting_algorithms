#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer value of the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
*/
typedef struct listint_s
{
int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
listint_t *create_listint(const int *array, size_t size);

#endif /* LIST_H */
