#include <stdio.h>
/**
* main-Entry point
*
* Description: using the main function
* this program prints programming is postive, zero, or negative
* Return:Always 0
*/
int main(void)
{
char ch;
for (char ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (char ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar ('\n');
return (0);
}
