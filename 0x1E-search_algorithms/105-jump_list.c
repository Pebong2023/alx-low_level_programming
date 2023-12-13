#include "search_algos.h"

/**
* jump_list - To search for a value in a sorted singly linked list
*		of integers using jump search.
* @list: A pointer to the head of the linked list to search
* @size_t: The number of nodes in the list
* @value: The value to search for
*
*Return: If the value is not present or the head of the list is NULL, NULL.

*/
listint_t *jump_list(listint_t *list, size_t, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;
	/* To check if the list is NULL or empty */
	if (list == NULL || size == 0)
	return (NULL);
	step = 0;
	/* Calculate the jump step size */
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/* store the previous jump node */
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
		/* if reached the end of the list */
		if (jump->inex + 1 == size)
			break;
	}
	printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
