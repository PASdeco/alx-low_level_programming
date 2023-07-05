#include "main.h"

int main_prime_number(int n, int a);

/**
 * is_prime_number - a function that returns 1 if the input integer is a
 *  prime number, otherwise return 0.
 *  @n: input
 *  Return: Always 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime_number(n, n - 1));
}
/**
 * main_prime_number - recursion
 * @n: input
 * @a: iterator
 * Return: Always 0
 */
int main_prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (main_prime_number(n, a - 1));
}
