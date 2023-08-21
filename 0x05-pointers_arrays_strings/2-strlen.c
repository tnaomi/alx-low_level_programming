#include "main.h"
/**
*  _strlen - prints the length of a string
*  @s: pointer to string location
*  Return: string length
*/

int _strlen(char *s)

{

int i;

for (i = 0; *s++;)
i++;

return (i);

}
