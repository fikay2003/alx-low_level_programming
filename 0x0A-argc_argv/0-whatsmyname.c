#include <stdio.h>
#include "main.h"
/**
* main- entry point
* @argc: it is an argument count
* @argv: is a vector of c string
*
* Return: nothing
*/
void main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
