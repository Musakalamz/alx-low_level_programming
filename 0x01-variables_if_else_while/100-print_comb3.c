/*
 * File: 100-print_comb3.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: ALways 
 */

int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
