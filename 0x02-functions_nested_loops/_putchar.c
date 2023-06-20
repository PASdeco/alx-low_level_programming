#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to std
 * @c: the char to print
 *
 * Return: always success 1
 * on error. -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
