/*
 * File: 2-print_alphabet_x10.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase from 'a' to 'z' 10x
 *
 * return - void (no return value)
 */

void print_alphabet_x10(void)
{
	char letter;
	int digit;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		for (digit = `1'; digit <= '10'; digit++)
		{
			_putchar(digit);
		}
	}
	_putchar('\n');

}
