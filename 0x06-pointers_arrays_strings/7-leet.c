/*
 * File: 7-leet.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * leet - encode strings
 * @a : string
 *
 * Return :char to uppercase
 */

char *leet(char *a)
{
	int index1, index2;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	while(a[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (a[index1] == leet[index2] || a[index1] - 32 == leet[index2])
				a[index1] = index2 + '0';
		}

		index1++;
	}

	return (a);
}
