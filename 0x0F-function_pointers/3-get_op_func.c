#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Choose the appropriate fxn
 * @s: the operator in string format
 * Return: sum of a and b
 */
int (*get_op_func(char *s))(int, int)
{
	op_t choices[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	}
	int indx = 0;

	while (indx < 5)
	{
		if strcmp(s, choices[indx].op)
		{
			return ((choices[indx].f));
		}
		indx++;
	}
	return (0);

}
