/*
 * File: 3-islower.
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * _islower - checks for tge lowercase character
 *
 * return - (1) if c is lowercase and (0) is otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
