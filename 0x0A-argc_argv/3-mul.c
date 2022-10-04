#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 oif true, 1 if false
 */
int main(int argc, char *argv[])
{

	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a + b);
		return (0);
	}
	printf("error\n");
	return (0);
}
