#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - returns pointer to allocated memory
 * @s1: destination string
 * @s2: source string
 * @n:  required bytes of s2
 * Return: string/ NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int len_s1, len_s2, i_s1, i_s2, total;
i_s1 = i_s2 = 0;
if (s1 != NULL)
{
for (len_s1 = 0; s1[i_s1]; i_s1++)
{
len_s1++;
}
}
else
{
len_s1 = 0;
}
if (s2 != NULL)
{
for (len_s2 = 0; s2[i_s2]; i_s2++)
{
len_s2++;
}
}
else
len_s2 = 0;
if (len_s2 < n)
len_s2 = n;
string = malloc(len_s2 + len_s1 + 1);
if (string == NULL)
return (NULL);
for (i_s1 = 0; i_s1 < len_s1; i_s1++)
{
string[i_s1] = s1[i_s1];
}
for (i_s2 = 0; i_s2 < n; i_s2++)
{
string[i_s1 + i_s2] = s2[i_s2];
}
string[len_s1 + len_s2] = '\0';
return (string);
}
