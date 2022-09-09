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
	int long intlongType;
	int long long intlonglomgType;
	char charType;
	double doubleType;
	/*
	 * size of evaluates the size of variables
	 */
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of int long: %zu bytes\n" sizeof(inlongType));
	printf("size of int long long: %zu bytes\n" sizeof(intlonglongTypr));
	printf("size  of char: %zu bytes\n", sizeof(charType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	return (0);
}
