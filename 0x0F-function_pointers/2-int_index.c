#include "function_pointers.h"
/**
* int_index - a function that searches for an integer.
* @array: used to store multiple values
* @size: number of elements in the array
* @cmp:  pointer to the function to be used to compare values
* Return: 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[1]))
return (i);
i++;
}
}
}
return (-1);
}
