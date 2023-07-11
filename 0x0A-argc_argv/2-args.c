#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
