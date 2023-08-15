#include <stdio.h>
#include "main.h"

/**
 * print_to_98- counts from n to 98
 * @n: to count from n to 98
 * Return: integers list
 */
void print_to_98(int n)
{

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		if (n < 99)
		{
			while (n < 99)
			{
				printf("%d", n);
				if (n != 98)
				{
				    	printf(", ");
				}
				else
				{
				    	printf("\n");
				}
				n++;
			}
		}
		else
		{
			while (n > 97)
			{
				printf("%d", n);
				if (n != 98)
				{
				    	printf(", ");
				}
				else
				{
				    	printf("\n");
				}
				n--;
			}
		}
	}
}
