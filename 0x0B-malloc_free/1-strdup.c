#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * allocate mem w/ malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *newStr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	newStr = malloc(len * sizeof(*str));
	if (newStr == NULL)
		return (NULL);
	while (i <= len)
	{
		newStr[i] = str[i];
		i++;
	}
	return (newStr);
}
