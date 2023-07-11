#include <stdio.h>
#include "main.h"

/**
 * _atoi - entry point
 * @s: input
 * Return: Always 0
 */
int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;

	while (a < d && e == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{

			f = s[a] - '0';
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (c);
}

/**
 *  main - entry point
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int output, put1, put2;
	{
		printf("Error\n");
		return (1);
	}

	put1 = _atoi(argv[1]);
	put2 = _atoi(argv[2]);
	output = put1 * put2;

	printf("%d\n", output);
	return (0);
}
