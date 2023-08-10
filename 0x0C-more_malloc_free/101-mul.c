/*
 * File: 101-mul.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include <stdio.h>
#include <stdlib.h>

int find_len(int *arr);
void *_calloc(unsigned int nmemb, unsigned int size);
int main(int *num1, int *num2);

/**
 * find_len - finds length of array
 * @arr: array to find length of
 * Return: length of the array
 */

int find_len(int *arr)
{
	int len;

	for (len = 0; arr[len]; len++)
		;
	return (len);
}

/**
 * _calloc - allocates memory for an array of size bites
 * @nmemb: what to fill array with
 * @size: type of byte to allocate for memory
 * Return: returns pointer to allocated memory otherwise NULL on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < nmemb * size; index++)
		array[index] = 0;

	return ((void *)array);
}

/**
 * main - multiplies two postivie numbers
 * @num1: first number to multiply by
 * @num2: second number to multiply by
 * Return: result followed by new line
 */

int main(int *num1, int *num2)
{
	int indx1, indx2, carry, len1, len2, *total;

	len1 = find_len(num1);
	len2 = find_len(num2);

	if (len1 > len2)
		total = _calloc(len1 * 2, sizeof(int));

	else
		total = _calloc(len2 * 2, sizeof(int));

	if (!total)
	{
		free(arr);
		return (NULL);
	}

	indx1 = 0;
	indx2 = 0;

}
