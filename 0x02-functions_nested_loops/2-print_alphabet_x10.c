#include "main.h"
/**
* print_alphabet_x10 - function to print abc x10
*
* Return: 0
*/
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
return (0);
}