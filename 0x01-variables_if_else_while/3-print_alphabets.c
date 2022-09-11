#include <stdio.h>
/**
* main- Entry point
*
* Return: always return 0
*/
int main(void)
{
char lowerCase = 'a';
char upperCase = 'A';
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}
for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
{
putchar(upperCase);
}
putchar('\n');
return (0);
}
