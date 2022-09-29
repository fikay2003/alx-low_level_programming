#include "main.h"
/**
* _puts_recursion - function that prints a string
* @s: the string to be printed out
*return: always 0
*/
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
_putchar('\n');
}
