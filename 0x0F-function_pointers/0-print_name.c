#include "main.h"
/**
*print_name - funtion to print name
*@f: pointer to the function
*@name: name to b printed
*return nothing
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
