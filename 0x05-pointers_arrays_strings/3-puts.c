/**
 * File: 0-reset_to_98.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * _puts - swaps the values of two integers.
 * @str: variable to countp
 *
 * Return the length of @str
 */

void _puts(char *str)
{
	while(*str)
		_putchar(*str++);

	_putchar('\n');
}
