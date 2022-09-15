#include "main.h"
/**
* main -  check the code
*
* Return: always 0
*/
void print_alphabet(void);
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
}
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
