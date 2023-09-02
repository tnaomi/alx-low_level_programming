#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds arguments
 * @argc: argument count
 * @argv: arguments / arg vector
 * Return: sum, 0, Error
 */

int main(int argc, char const *argv[])
{
int i = 1, sum = 0;

if (argc == 1)
printf("0\n");
else if (argc > 1)
{
for (; i < argc;)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
else
sum += atoi(argv[i]);
i++;
}
printf("%d\n", sum);
}
return (0);
}
