/*
 * File: 3-islower.
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 *_islower - Checks if a character is lowercase
 * @c - character to be checkex
 * 
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
