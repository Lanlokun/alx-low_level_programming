#include "main.h"

/**
 *_abs - checks for alphabets
 * @n: character to check
 * Return: absolute value  of a number
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	else
	{

		return (n);
	}

	_putchar('\n');
}
