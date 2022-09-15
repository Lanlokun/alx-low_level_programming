/**
 *
 * File : 6-abs.c
 * Author : Malik K Lanlokun
 *
 */

#include "main.h"
#include <stdio.h>

/*
 *
 * _abs - checks for sign
 * @n: number to check
 * Return: absolute value of number
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
    	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

return (0);

}
