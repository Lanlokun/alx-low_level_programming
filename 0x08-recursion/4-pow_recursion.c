/**
 * File - 4-pow_recursion.c
 * Author - Malik K Lanlokun
 *
 */


#include "main.h"

/*
 * _pow_recursion(int x, int y)
 *
 * @x - base variable
 * @y - power variable
 *
 * Return -value of x raised to the power y
 */


int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *=_pow_recursion(x, y - 1);

	return result;
}
