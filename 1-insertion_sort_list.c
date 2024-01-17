#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers using the insertion sort list algorithm
 * @list: pointer to the head of doubly linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *tmp;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current)
	{
		while (current->next && (current->n > current->next->n))
		{
			tmp = current->next;
			current->next = tmp->next;
			tmp->prev = current->prev;

			if (current->prev)
				current->prev->next = tmp;
			if (tmp->next)
				tmp->next->prev = current;

			current->prev = tmp;
			tmp->next = current;

			if (tmp->prev)
				current = tmp->prev;

			else
				*list = tmp;

			print_list(*list);
		}
		current = current->next;
	}
}

