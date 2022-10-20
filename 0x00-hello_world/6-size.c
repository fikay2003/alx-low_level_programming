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

	printf("size  of a char: %lu byte(s)\n", sizeof(charType));
	printf("size of a int: %lu byte(s)\n", sizeof(intType));
	printf("size of a long int: %lu byte(s)\n", sizeof(longIntType));
	printf("size of a long long int: %lu byte(s)\n", sizeof(longLongIntType));
	printf("size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
