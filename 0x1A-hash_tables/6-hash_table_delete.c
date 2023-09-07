#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
	hash_node_t *tmp1 = ht->array[i];

	while (tmp1 != NULL)

	{
	hash_node_t *tmp2 = tmp1;

	tmp1 = tmp1->next;
	free(tmp2->key);
	free(tmp2->value);
	free(tmp2);
	}
	}

	free(ht->array);
	free(ht);
}
