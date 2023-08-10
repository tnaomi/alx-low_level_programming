#include <stdio.h>

int main(void)
{
	char character;
	int intNo;
	long longNo;
	long long longlongNo;
	float floatNo;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of an int: %zu byte(s)\n", sizeof(intNo));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longNo));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongNo));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatNo));

	return (0);
}
