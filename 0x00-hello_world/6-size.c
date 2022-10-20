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
	long int longIntType;
	long long int longLongIntType;

	printf("size of int: %lu bytes\n", sizeof(intType));
	printf("size of float: %lu bytes\n", sizeof(floatType));
	printf("size  of char: %lu bytes\n", sizeof(charType));
	printf("size of long int: %lu bytes\n", sizeof(longIntType));
	printf("size of long long int: %lu bytes\n", sizeof(longLongIntType));
	return (0);
}
