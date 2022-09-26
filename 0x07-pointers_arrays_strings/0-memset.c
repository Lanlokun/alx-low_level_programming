/*
 * File: 0-memset.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s : pointer to memory area s
 * @b : byte b
 * @n : integer n
 *
 * Return : pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s;


	for (index = 0; index < n; index++)
	{
		memory[index] = b;
	}

	return (memory);

}

