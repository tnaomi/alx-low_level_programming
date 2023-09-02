
#include <stdio.h>

/**
 * main - prints all command args
 * @argc: argument count
 * @argv: arguments / arg vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int count = 0;
for (count = 0; count < argc; )
{
printf("%s\n", argv[count]);
count++;
}
return (0);
}

