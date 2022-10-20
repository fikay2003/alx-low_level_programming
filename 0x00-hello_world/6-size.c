#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("size  of a char: %lu bytes\n", sizeof(charType));
	printf("size of a int: %lu bytes\n", sizeof(intType));
	printf("size of a long int: %lu bytes\n", sizeof(longIntType));
	printf("size of a long long int: %lu bytes\n", sizeof(longLongIntType));
	printf("size of a float: %lu bytes\n", sizeof(floatType));
	return (0);
}
