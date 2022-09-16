#include "main.h"

/**
 * mul - multiplies the values of a and
 * @a: value to multiply
 * @b: value to multiply
 * Return: result of multiplying a and b
 *
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while(i < 10)
	{
		if( i % 2 == 0)
		{
			i++;
		}

		_putchar((i) + '0');
		i++;
	}

	_putchar('\n');

}
