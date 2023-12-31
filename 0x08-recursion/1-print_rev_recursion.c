/*
 * File: 1-print_rev_recursion.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: The string to be printed in reversed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
