#include "search_algos.h"

/**
* linear_skip - searches for a value in a sorted singly linked list
*		of integers using linear skip.
* @list: A pointer to the head of the linked list to search.
* @value: The value to search for
*
* Return: If the value is not present or the head of the list is NULL, NULL.
*	otherwise, a pointer to the first node where the value is located.
*/
skiplist_t *linear_skip(skiplist_t *list int value)
{
	skiplist_t *node, *jump;

	/* check if the list is Null */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		/* store the previous jump node */
		if (jump->express != NULL)
		{
			/* jump to the next express node */
			jump = jump->express;

			printf("Value checked at index [%ld] = [%d]\n", jump->, jump->n);
		}
		else
		{
			/* Tranverse to the end of the list */
			while (jump->next != NULL)
			/* move to the next node in the list */
			jump = jump->next;
		}
	}
	printf("value found betweent indexes [%ld] and [%ld]\n", node->index, jump->index);

	/* To perform a linear search, checking each */
	/* node's value to find the target value */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
