/*
 * File: 1-swap.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * swap_int -Swaps the value of two integers.
 * @a: The first pointer to an integer to be swapped.
 * @b: The second pointer to an integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
