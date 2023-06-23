#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c 
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
