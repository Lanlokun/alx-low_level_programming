/*
 * File: 2-strchr.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"
#include  <stddef.h>

/**
 * _strchr -  locates a character in a string.
 * @s : pointer to memory area s
 * @c :
 *
 * Return : a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

