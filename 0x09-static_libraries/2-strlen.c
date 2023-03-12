#include "main.h"
/**
  * _strlen - changes the initial.
  * @s: parameter to change.
  * Return: len
  */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

