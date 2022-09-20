/**
 * File: 0-reset_to_98.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * print_rev - swaps the values of two integers.
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
