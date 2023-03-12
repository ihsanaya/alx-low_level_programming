#include "main.h"
/**
 * _strcpy - copy the pointer to variable.
 * @src: the pointer is the origin.
 * @dest: the pointer is the destiny.
 * Return: in .
 */

char *_strcpy(char *dest, char *src)
{
	char *in = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (in);
}

