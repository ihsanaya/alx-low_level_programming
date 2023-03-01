#include "main.h"
/**
 * reverse_array - reverse an integer array
 * @a: the integer array
 * @n: it's size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b, mat;

	for (b = 0; b < n / 2; b++)
	{
		mat = *(a + b);
		*(a + b) = *(a + n - b - 1);
		*(a + n - b - 1) = mat;
	}
}

