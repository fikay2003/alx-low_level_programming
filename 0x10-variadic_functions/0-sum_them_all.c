#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all- Function to return the sum of all its parameters
* @n: number of arguments
* return: always 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum = 0;
unsigned int i = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (0);
}
