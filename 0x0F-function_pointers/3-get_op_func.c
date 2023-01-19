#include "3-calc.h"
#include <stdlib.h>


/* betty style doc for function main goes there */
/**
 * get_op_func -function to call a function that does an operation
 * @s: operator passed as argument ti the program
 * Return: pointer to operator of interest
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i/2].f);
}
