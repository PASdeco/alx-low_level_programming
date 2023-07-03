#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @n: bytes to change
 * @s: starting address
 * @b: desired outcome
 * Return: change array with the n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
