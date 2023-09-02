
#include <stdio.h>

/**
 * main - prints number of command line arguments
 * @argc: argument count
 * @argv: arguments / arg vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int count = 0;
if (argc == 0 && *argv[argc])
{
printf("%d\n", 0);
}
else
{
for (count = 0; count < argc - 1; )
{
count++;
}
printf("%d\n", count);
}
return (0);
}
