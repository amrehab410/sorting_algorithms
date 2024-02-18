#include "sort.h"

/**
 * insertion_sort_list - insertion sorting algorithm
 * @list: linked list to sort
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	a = (*list)->next;
	while (a != NULL)
	{
		b = a;
		a = b->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swap_list(b->prev, b);
				if (!b->prev)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}
}

/**
 * swap_list - swap 2 nodes in a double-linked list
 * @a: first node address
 * @b: second node address
 * Return: None
 */
void swap_list(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
	{
		a->prev->next = b;
	}
	if (b->next != NULL)
	{
		b->next->prev = a;
	}
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}
