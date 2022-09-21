/*
 * File: 1-strncat.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * strncat - concatenates two strings
 * @dest : destination
 * @src : source
 *
 * Return : concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
		i++;

	while(src[j] != src[n])
	{

		dest[i] = src[j];
		i++;
		j++;

	}

	dest[i] = '\0';

	return (dest);

}
