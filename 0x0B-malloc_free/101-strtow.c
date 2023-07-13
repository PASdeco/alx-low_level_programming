#include <stdlib.h>
#include "main.h"
/**
 * count_word - entry point
 * @s: string
 * Return: words
 */
int count_word(char *s)
{
	int word, a, b;

	word = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - entry point
 * @str: input
 * Return: points to an array
 */
char **strtow(char *str)
{
	char **paschal, *ugo;
	int c, d = 0, length = 0, words, e = 0, begin, stop;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	paschal = (char **) malloc(sizeof(char *) * (words + 1));
	if (paschal == NULL)
	if (paschal == NULL)
	return (NULL);
	for (c = 0; c <= length; c++)
	{
		if (str[c] == ' ' || str[c] == '\0')
		{
			if (e)
			{
				stop = c;
				ugo = (char *) malloc(sizeof(char) * (c + 1));
				if (ugo == NULL)
					return (NULL);
				while (begin < stop)
					*ugo++ = str[begin++];
				*ugo = '\0';
				paschal[d] = ugo - e;
				d++;
				e = 0;
			}
		}
		else if (e++ == 0)
			begin = c;
	}
	paschal[d] = NULL;

	return (paschal);
}
