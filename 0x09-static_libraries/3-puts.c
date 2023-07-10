#include "main.h"
/**
 * _puts - entry point
 * @s: input
 * Return: Always 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
