#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Start point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, p;

	for (a = '0'; a < '9'; a++)
	{
	for (p = a + 1; p <= '9'; p++)
	{
	if (p != a)
	{
	putchar(a);
	putchar(p);
	if (a == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
