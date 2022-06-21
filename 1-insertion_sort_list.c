#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers Insertion sort
 * @list: Linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *current, *tmp = NULL;

	if (!list || !*list)
		return;
	node = *list;

	if (!node->next)
		return;

	while (node->next)
	{
		current = node->next;
		if (node->n > current->n)
		{
			tmp = node;
			while (tmp && tmp->n > current->n)
			{
				tmp->next = current->next;
				if (tmp->next)
				{
					tmp->next->prev = tmp;
				}
				current->prev = tmp->prev;
				if (current->prev)
				{
					current->prev->next = current;
				}
				else
				{
					*list = current;
				}
				tmp->prev = current;
				current->next = tmp;
				print_list(*list);
				tmp = current->prev;
			}
			continue;
		}
		node = node->next;
	}
}
