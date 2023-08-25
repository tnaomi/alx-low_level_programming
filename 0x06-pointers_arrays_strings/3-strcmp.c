#include "main.h"

/**
 * _strcmp - concatenate 2 strings up to n bytes
 * @s1:destination string
 * @s2:source string
 * Return:0 if equal, >0 if  first non-match char
 * in s1 greater than s2 (in ASCII), <0 if else
 */

int _strcmp(char *s1, char *s2)
{

int det;

int indx = 0;



if (s1[indx] != s2[indx])
{
det = s1[indx] - s2[indx];
}
else
{
det = 0;
}


return (det);
}
