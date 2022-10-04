#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *  create_array - creates an array of chars, and initializes
 *  it with a specific char.
 * @size: size of thr array
 * @c: character to insert
 * Return: Null if size is zero or of it fails,
 *  Pointer to array if everything is normla
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)

		return (NULL);
	array = malloc(sizeof(char) * size);
			if (array == NULL)
				return (NULL);
			for (index = 0; index < size; index++)
				array[index] = c;
			return (array);
}
