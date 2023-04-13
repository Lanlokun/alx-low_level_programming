#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
size_t i, j, k, l;
if (array == NULL)
    return (-1);
i = 0;
j = size - 1;
while (i <= j)
{
printf("Searching in array: ");
for (k = i; k < j; k++)
    printf("%d, ", array[k]);
printf("%d \n", array[k]);
l = (i + j) / 2;
if (array[l] == value)
    return (l);
else if (array[l] < value)
    i = l + 1;
else
    j = l - 1;

}

return (-1);
}