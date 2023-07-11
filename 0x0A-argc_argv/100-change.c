#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number;
	int a;
	int outcome;
	int dollar[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	outcome = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && number >= 0; a++)
	{
		while (number >= dollar[a])
		{
			outcome++;
			number -= dollar[a];
		}
	}

	printf("%d\n", outcome);
	return (0);
}
