#include "main.h"
/**
* _isupper - fucntion checks for uppercase character in c
* @c: character to be tested
* Return: Always 0
*/
int _isupper(int c)
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
return (0);
}
