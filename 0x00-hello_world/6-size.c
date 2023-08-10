#include <stdio.h>

int main(void)
{
	char character;
	int intNo;
	long longNo;
	long long longlongNo;
	float floatNo;

	printf("Size of a char: %zu bytes\n", sizeof(character));
	printf("Size of an int: %zu bytes\n", sizeof(intNo));
	printf("Size of a long int: %zu bytes\n", sizeof(longNo));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongNo));
	printf("Size of a float: %zu bytes\n", sizeof(floatNo));

	return (0);
}
