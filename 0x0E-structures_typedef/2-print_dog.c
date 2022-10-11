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
return;
if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s\n", d->name);
if (d->age < 0)
printf("Age:(nil)\n");
else
printf("Age:%f\n", d->age);
if (d->owner == NULL)
printf("Owner:(nil)\n");
else
printf("Owner:%s\n", d->owner);
}
