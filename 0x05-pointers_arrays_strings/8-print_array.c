/**
 * File: 8-print_array.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"
#include <stdio.h>

/**
 * print array - Prints half of a string
 * @s: the string to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");

}

