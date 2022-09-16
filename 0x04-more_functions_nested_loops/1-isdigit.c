#include "main.h"

/**
 * _isdigit - checks if value is a digit
 * @c: character  to check
 * Return: 1 if digit, 0 if not digit
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}
