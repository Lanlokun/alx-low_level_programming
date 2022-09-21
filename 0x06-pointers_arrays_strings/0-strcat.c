/*
 * File: 0-strcat.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest : destination
 * @src : source
 *
 * Return : concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
		i++;

	while(src[j] != '\0')
	{

		dest[i] = src[j];
		i++;
		j++;

	}

	dest[i] = '\0';

	return (dest);

}