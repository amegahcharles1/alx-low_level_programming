#include <stdio.h>


/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *allocMemo = malloc(b);

	if (!allocMemo)
	{
		exit(98);
	}

	return (allocMemo);
}
