/**
 * File: 0-reset_to_98.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"
/**
 * _strlen - swaps the values of two integers.
 * @str: variable to countp
 *
 * Return the length of @str
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}

	return (count);
}
