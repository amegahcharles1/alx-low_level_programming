#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
