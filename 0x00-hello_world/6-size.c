#include <stdio.h>
/*
 * main - Entry point
 *
 * return is always 0
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	double doubleType;
	/*
	 * size of evaluates the size of variables
	 */
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size  of char: %zu bytes\n", sizeof(charType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	return (0);
}
