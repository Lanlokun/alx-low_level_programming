/**
 * File - 3-factorial.c
 * Author - Malik K Lanlokun
 *
 */


#include "main.h"

/*
 * factorial(int n)
 *
 * @n - variable n to be processed recursively
 *
 * Return - n recursively
 */


int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *=factorial(n - 1);

	return result;

}
