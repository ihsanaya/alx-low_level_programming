#include "main.h"

/**
 * _atoi - function with one argument
 * @s: char type pointer argument
 * Description: convert a string to an integer
 * Return: value of s
 */

int _atoi(char *s)
{
	int i, mist, comb;

	i = 0;
	mist = 1;
	comb = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			mist *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				comb = (s[i] - '0') * mist + comb * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (comb);
}
