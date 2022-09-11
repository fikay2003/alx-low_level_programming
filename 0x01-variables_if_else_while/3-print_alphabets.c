#include <stdio.h>
/**
* main-Entry point
*
* Description: using the main function
* this program prints "programming is postive, zero, or negative
* Return:Always 0 (Success)
*/
int main(void)
{
char c;
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (char c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar ('\n');
return (0);
}
