#include "main.h"
/**
 * _isalpha - Entry point
 * @c: input char
 * Description: check for alphabets
 * Return: 1 if alphabets 0 otherwise
 */
int _isalpha(int c)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (c == b)
			return (1);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		if (c == b)
			return (1);
	}

	return (0);
}
