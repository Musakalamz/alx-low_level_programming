/*
 * file: 0-create_array.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, an
 *		  initializes it with a specific char
 * @size: The size of the array to be initialized.
 * @c: The specific character to initiallize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *	   Otherwise, a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
