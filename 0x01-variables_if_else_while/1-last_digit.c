#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int l;

	srand(time(0));i
	n = rand() - RAND_MAX / 2;
	/* lets code all the way*/
	l = n % 10;
	if (l > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	if (l == 0)
		printf("last digit of %d is %d and is 0\n", n, l);
	if (l < 6 && l != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
