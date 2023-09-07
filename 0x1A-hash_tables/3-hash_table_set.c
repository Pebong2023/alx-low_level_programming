#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_hash_node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
	return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key) != 0)
	tmp = tmp->next;
	/* Update value if key already exists */
	if (tmp)
	{
	free(tmp->value);
	tmp->value = strdup(value);
	if (!tmp->value)
	return (0);
	return (1);
	}
	/* Add a new node if the key was not found */
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
	return (0);
	new_hash_node->key = strdup(key);
	if (!new_hash_node->key)
	{
	free(new_hash_node);
	return (0);
	}
	new_hash_node->value = strdup(value);
	if (!new_hash_node->value)
	{
	free(new_hash_node->key);
	free(new_hash_node);
	return (0);
	}
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
