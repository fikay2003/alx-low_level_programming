#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
*print_dog - function used to print the value of struct dog
*@d: pointer to dog
* return: always 0
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("Name: (nil)");
}
else
{
printf("\0");
}
}
