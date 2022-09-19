/**
 * File: 0-reset_to_98.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"
/**
 * _strlen - swaps the values of two integers.
 * @s: variable to count
 * @b: variable to swap
 *
 */

int _strlen(char *s)
{
	int count = 0;

	while(*s++)
	{
		count++;
	}

	return(count);
}
