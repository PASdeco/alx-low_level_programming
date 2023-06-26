#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
