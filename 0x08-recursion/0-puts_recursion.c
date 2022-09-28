/**
 * File - 0-puts_recursion.c
 * Author - Malik K Lanlokun
 *
 */


#include "main.h"

/*
 * _puts_recursion(char *s)
 *
 * @s - pointer to memory area s holding string to be returned
 * Return - string
 */


void _puts_recursion(char *s)
{

	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{

		_putchar('\n');
	}
}


