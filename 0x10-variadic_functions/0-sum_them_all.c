#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Entry Point
* @n: number of arguments
* return: always 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;
while (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
