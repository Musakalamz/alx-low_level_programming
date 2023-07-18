/*
 * File: 1-alphabet.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * print_alphabet - prints the lowercase letteers from 'a' to 'z'
 *
 * return - void (no return value)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
