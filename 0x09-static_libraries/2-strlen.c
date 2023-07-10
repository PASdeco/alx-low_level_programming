#include "main.h"
/**
 * _strlen - entry point
 * @s: input
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
