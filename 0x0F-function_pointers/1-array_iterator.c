/*
 * File: 1-array_iterator.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
