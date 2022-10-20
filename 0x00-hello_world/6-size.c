#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	double doubleType;

	printf("size of int: %lu bytes\n", sizeof(intType));
	printf("size of float: %lu bytes\n", sizeof(floatType));
	printf("size  of char: %lu bytes\n", sizeof(charType));
	printf("size of double: %lu bytes\n", sizeof(doubleType));
	return (0);
}
