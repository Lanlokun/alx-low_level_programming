/**
 * File: 0-reset_to_98.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * print_rev - swaps the values of two integers.
 * @s: the string to be printed
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{

		tmp = s[index];

		s[index] = s[len - index - 1];

		s[len - index - 1] = tmp;
	}
}
