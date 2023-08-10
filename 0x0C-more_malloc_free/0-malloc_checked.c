/*
 * File: 0-malloc_checked.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *alloc_mem = malloc(b);

	if (alloc_mem == NULL)
		exit(98);

	return (alloc_mem);
}
