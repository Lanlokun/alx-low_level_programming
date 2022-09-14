#include "main.h"

/**
 * 3-islower - checks for lowercase character
 * @c: character  to check
 * Return 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
