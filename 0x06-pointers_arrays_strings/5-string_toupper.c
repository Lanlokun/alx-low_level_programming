/*
 * File: 5-string_toupper.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * string_toupper - convert string from lowercase to uppercase
 * @s : string 
 *
 * Return : string to uppercase
 */

char *string_toupper(char *a)
{
	int index = 0;

	while (a[index])
	{
		if (a[index] >= 'a' && a[index] <= 'z')
			a[index] -= 32;
		index++;
	}

	return (a);
}
