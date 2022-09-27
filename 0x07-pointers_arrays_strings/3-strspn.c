/*
 * File: 3-strspn.c
 * Auth: Malik K Lanlokun
 */

#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s : pointer to memory area s
 * @accept : pointer to memory area accept
 *
 * Return : number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int i;
	while(*s)
	{

		for (i = 0; accept[i]; i++)
		{

			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if(accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
