#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: print the string, input
 * Return; half of input
 */
void puts_half(char *str)
{
	int a, b, length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	b = (length / 2);

	if ((length % 2) == 1)
		b = ((length + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
