#include "main.h"
/*
* _isalpha - function that check for alphabetic character
* @c: is the int that will be used for argument in the function
* Return: 0
*/
int  function that checks for alphabetic character_isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
