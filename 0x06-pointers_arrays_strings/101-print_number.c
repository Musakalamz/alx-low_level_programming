/*
 * File: 101-print_number.
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int num = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	while ((num / div) >= 10)
		div *= 10;

	while (div > 0)
	{
		_putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
}
