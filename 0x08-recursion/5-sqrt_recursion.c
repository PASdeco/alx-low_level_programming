#include "main.h"

int main_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: cal square root
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - recursion
 * @n: cal square root
 * @a: iterator
 * Return: Always 0
 */
int main_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (main_sqrt_recursion(n, a + 1));
}
