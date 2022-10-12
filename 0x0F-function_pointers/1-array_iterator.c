#include "function_pointers.h"
/**
* array_iterator- function to  executes a function given as a parameter
* @array:  executes a function given as a parameter
* @size: size of array
* @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
while (i < size)
action(array[i]);
}
