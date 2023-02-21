#include "sort.h"

/**
 * insertion_sort_list - Function sorts a doubly linked list of integers in
 * ascending order.
 *
 * @list: The doubly linked list we are to sort.
 *
 * Description: Function sorts a doubly linked list of integers in ascending
 * order.
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_items(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}

/**
 * swap_items - Swaps two nodes in a listint doubly-linked list.
 * @h: A pointer to the head of the list.
 * @n1: A pointer to the first node to swap.
 * @n2: A pointer to the second node to swap.
 *
 * Description: Swaps two nodes in a listint linked.
 *
 * Return: Nothing.
 */
void swap_items(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}
