#include "main.h"
/**
* print_numbers - function that prints the numbers, from 0 to 9
*
* Return: Always 0
*/
void print_numbers(void)
{
int a;
if ((a >= '0') && (a <= '9'))
{
_putchar(a);
a++
}
_putchar('\n');
return (0);
}
