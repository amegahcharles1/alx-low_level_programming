#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - multiply the args
 * @size: size of memory to be allocated
 * @c: character to be placed in memory
 *
 * Return: 0 for successful exit
 */

char *create_array(unsigned int size, char c)
{

	char *arrayOfChar;
	unsigned int i;

	arrayOfChar = malloc(size);

	if (size == 0 || arrayOfChar == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arrayOfChar[i] = c;
	}

	return (arrayOfChar);
}
