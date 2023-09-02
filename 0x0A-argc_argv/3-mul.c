#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argc: argument count
 * @argv: arguments / arg vector
 * Return: product, 1 if error
 */

int main(int argc, char const *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}

