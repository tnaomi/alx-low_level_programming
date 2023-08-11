#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>


/**
 * main - prints a random number and verifies if
 * the last digit
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;

	printf("Last digit of %d is %d ", n, mod);
	if (mod == 0)
	{
	printf("and is 0\n");
	}
	else
		if (mod > 5)
		{
		printf("and is greater than 5\n");
		}
		else
		{
		printf("and is less than 6 and not 0\n");
		}
	return (0);

}
