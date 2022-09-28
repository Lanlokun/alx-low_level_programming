/**
 * File - 2-strlen_recursion.c
 * Author - Malik K Lanlokun
 *
 */


#include "main.h"

/*
 * strlen_recursion(char *s)
 *
 * @s - pointer to memory area s holding string to be returned
 * Return - length string
 */


int _strlen_recursion(char *s)
{

		int len = 0;

		if (*s)
		{
			len++;
			len += _strlen_recursion(s + 1);
		}

		return (len);
}
