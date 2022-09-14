#include "main.h"

/**
 * isalpha - checks for alphabets
 *
 * Return: 1 if alphabet, 0 if not alphabet
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');

}
