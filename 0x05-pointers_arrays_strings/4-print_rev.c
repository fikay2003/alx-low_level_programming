#include "main.h"
#include <string.h>
/**
* print_rev - is a function that prints a string, in reverse,
*followed by a new line
* @s: content
*
* Return: always 0
*/
void print_rev(char *s)
{
int i,length;
length = strlen(string)-1;
for (i=0;i<strlen(string)/2;i++)
{
temp = string[i];
string[i] = string[length];
string[length--] = temp;
}
}
