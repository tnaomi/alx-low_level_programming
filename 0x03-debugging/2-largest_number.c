#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a == b || a == c)
	{
		largest = a;
		printf("%d\n", largest);
	}

	else
	{
		if (a > b)
		{
			if (b > c)
			{
				if (a > c)
					{
					    largest = a;
					    printf("%d\n", largest);
					}
			}
		}
		else if (a < b && b > c && a < c)
		{
		    largest = b;
		    printf("%d\n", largest);
		}
		else
		{
		    largest = c;
		    printf("%d\n", largest);
		}
	}
	return (largest);
}
