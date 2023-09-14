#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Call the calculator
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int (*runopt)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	runopt = get_op_func(argv[2]);

	if !(runopt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", runopt(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

