/*
 * File: 3-islower.
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * return - (1) if c is lowercase or (0) if c is otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 'z')
		return (1);
	else
		return (0);

}
