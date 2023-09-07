#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a hash number from a string
 *
 * @str: string to hash
 * Return: computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381; /* Initial hash value */
	int c;

	while ((c = *str++))
	{
	/* The hash algorithm: hash * 33 + c */
	hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
