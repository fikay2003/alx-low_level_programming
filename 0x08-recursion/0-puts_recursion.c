#include "main.h"
/**
* _puts_recursion - function that prints a string
* @s: the string to be printed out
*return: nothing
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
return;
}
