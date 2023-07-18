/*
 * File: 6-abs.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int)
{
	int num;

	if (num < 0)
		return (-num);
	else
		return (num);
}
