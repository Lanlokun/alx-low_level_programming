/**
 *
 * File : 1-alphabet.c
 * Author : Malik K Lanlokun
 *
 */

#include "main.h"

/*
 *
 * _isalpha - checks for alphabets
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	 _putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
    	_putchar('\n');

	return (0);
}
