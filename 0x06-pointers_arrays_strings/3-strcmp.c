/*
 * File: 3-strcmp.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * strcmp - compares two strings
 * @s1 : string
 * @s2 : string
 *
 * Return : outcome of compared string
 */

int _strcmp(char *s1, char *s2)
{

	while(*s1 != '\0' || *s2 != '\0')
	{
		if(*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (0);
}
