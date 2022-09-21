/*
 * File: 1-strncat.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * strncpy - copie strings
 * @dest : destination
 * @src : source
 *
 * Return : concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && i != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
