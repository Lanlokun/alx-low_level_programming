/**
 * File: 9-strcpy.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies value of a pinter reference to another pointer
 * @dest : destination
 * @src : source
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);

}

