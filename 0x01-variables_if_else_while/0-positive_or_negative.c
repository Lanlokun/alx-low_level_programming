/*
 * File: 0-positive_or_negative.c * Auth: Malik K Lanlokun
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *
 * main - Prints a random number and states whether
 *      it is positive, negative, or zero.int
 *
 * Return: Always 0.
 */
	srand(time(0));
 	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
