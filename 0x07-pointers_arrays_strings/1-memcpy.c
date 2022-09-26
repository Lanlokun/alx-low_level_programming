/*
 * File: 1-memcpy.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @dest : pointer to memory area dest
 * @src : pointer to memory area src
 * @n : integer n
 *
 * Return : pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index <  n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}

