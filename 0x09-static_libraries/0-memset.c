#include "main.h"
/**
 * _memset - specified value
 * @n:number of bytes
 * @s: address
 * @b: desired value
 * Return: new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
