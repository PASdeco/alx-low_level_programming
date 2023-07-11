#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - entry point
 * @str: input array
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int number;

	number = 0;
	while (number < strlen(str))

	{
		if (!isdigit(str[number]))
		{
			return (0);
		}

		number++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number;
	int str_to_int;
	int sum = 0;

	number = 1;
	while (number < argc)
	{
		if (check_num(argv[number]))

		{
			str_to_int = atoi(argv[number]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		number++;
	}

	printf("%d\n", sum);

	return (0);
}
