/*
 * File: 0-positive_or_negative.c
 * Auth: Musakalamz A Ogunsolu
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/*
 * main - assign a random number to the variable n each time it is executed.
 *
 * return - Always 0.
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	elseif(n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
