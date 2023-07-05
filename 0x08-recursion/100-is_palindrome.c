#include "main.h"

int main_palindrome(char *s, int a, int b);
int main_prime_number(char *n);

/**
 * is_palindrome -  a function that returns 1 if a string is
 *  a palindrome and 0 if not
 *  @s: input
 *  Return: Always 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (main_palindrome(s, 0, main_prime_number(s)));
}

/**
 * main_prime_number - recursion
 * @n: input
 * Return: Always 0
 */
int main_prime_number(char *n)
{
	if (*n == '\0')
		return (0);
	return (1 + main_prime_number(n + 1));
}

/**
 * main_palindrome - recursion
 * @s: input
 * @a: iterator
 * @b: input
 * Return: 1 or 0 if not
 */
int main_palindrome(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
		return (0);

	if (a >= b)
		return (1);
	return (main_palindrome(s, a + 1, b - 1));
}
