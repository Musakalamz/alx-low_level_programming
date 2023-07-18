/*
 * File: 3-islower.
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * _islower -checks for lowercase character
 * @c - character to be checkex
 * return - (1) if c is lowercase or (0) if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
