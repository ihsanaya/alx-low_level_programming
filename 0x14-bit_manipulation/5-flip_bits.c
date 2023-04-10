#include "main.h"
/**
 * flip_bits -how many bits is needed to flip from one number to another
 * @n: origin number.
 * @m: destination number.
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nox = n ^ m;
	int numb = 0;

	while (nox)
	{
		numb += nox & 1;
		nox >>= 1;
	}
	return (numb);
}
