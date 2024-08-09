#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list.
 * @head: A pointer to the head of the list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	/* Adjust the links to swap node1 and node2 */
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	node2->next = node1;

	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*head = node2; /* Update the head if necessary */

	node1->prev = node2;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *next_node;

	/* Check if the list is empty or has only one element */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	/* Start sorting from the second element */
	current = (*list)->next;
	while (current != NULL)
	{
		next_node = current->next; /* Save the next node */
		previous = current->prev;

		/* Move current left until it's in the correct position */
		while (previous != NULL && current->n < previous->n)
		{
			swap_nodes(list, previous, current);
			print_list((const listint_t *)*list); /* Print the list after each swap */
			previous = current->prev; /* Update previous after the swap */
		}
		current = next_node; /* Move to the next node */
	}
}
