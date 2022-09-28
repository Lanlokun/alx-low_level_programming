/**
 * File - 1-print_rev_recursion.c
 * Author - Malik K Lanlokun
 *
 */


#include "main.h"

/*
 * _print_rev_recursion(char *s)
 *
 * @s - pointer to memory area s holding string to be returned
 * Return - reverse string
 */


void _print_rev_recursion(char *s)
{

		if (*s)
		{
			_print_rev_recursion(s + 1);
			_putchar(*s);
		}
}
