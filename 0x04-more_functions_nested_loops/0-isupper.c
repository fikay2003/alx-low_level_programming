#include "main.h"
/**
* _isupper - Function use to check if c is a uppercase lette
* @c: character to be tested
* Return: Always 0
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
return (0);
}
