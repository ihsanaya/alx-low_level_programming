#include "main.h"
/**
 * _islower - Entry point
 * @c: input char
 * Description: checks if char islower
 * Return: 1 if is lowercase else 0
 */
int _islower(int c)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == c)
			return (1);
	}
	return (0);
}
