/**
 * File: 6-puts2.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * puts2 - Prints one character out of two of a string.
 * @s: the string to be printed
 */

void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;

	for (index = 0; index <= len - 1; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
