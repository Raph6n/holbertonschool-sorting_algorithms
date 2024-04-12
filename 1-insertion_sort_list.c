#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * @list: the list to print
 * Return:
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *s;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	tmp = *list;

	while (tmp->next)
	{
		if (tmp->n > tmp->next->n)
		{
			tmp->next->prev = tmp->prev;

			if (tmp->next->prev)
				tmp->prev->next = tmp->next;
			else
				*list = tmp->next;

			tmp->prev = tmp->next;
			tmp->next = tmp->next->next;
			tmp->prev->next = tmp;

			if (tmp->next)
				tmp->next->prev = tmp;

			tmp = tmp->prev;
			print_list(*list);

			while (tmp->prev && tmp->prev->n > tmp->n)
			{
				if (s != NULL)
				s = tmp->next;
			tmp = tmp->prev;
			}
		}
		else
		tmp = tmp->next;
		if (s)
		s = NULL;
	}
}
