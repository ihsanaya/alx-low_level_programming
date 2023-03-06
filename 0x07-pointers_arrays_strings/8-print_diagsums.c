#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the two diagonal sums of a square matrix
 * @a: 2d int array representing square matrix
 * @size: the size*size of square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int c, sum1 = 0, sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += *(a + size * c + c);
		sum2 += *(a + size * (c + 1) - c - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
