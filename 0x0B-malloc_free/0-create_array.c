#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char c));
	if (size == 0 || str == NULL)
		return (NULL);

	if (i = 0; i < size; i++)
	{
str[i] = c;
	}

	return (str);
}
