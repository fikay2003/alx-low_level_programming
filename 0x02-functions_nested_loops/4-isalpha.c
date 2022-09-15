#include "main.h"
/*
* _isalpha - function used to check for alphabetic character
*
* @c: is the int that will be used for argument in the function
*/
int _isalpha(int c)
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
