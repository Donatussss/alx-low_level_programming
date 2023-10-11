#include "3-calc.h"

/**
 * get_op_func - a function that selects the correct
 * function to perform the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return:  a pointer to the function that corresponds
 * to the operator given as a parameter
 * Example: get_op_func("+") should return a pointer
 * to the function op_add
 * You are not allowed to use switch statements
 * You are not allowed to use for or do ... while loops
 * You are not allowed to use goto
 * You are not allowed to use else
 * You are not allowed to use more than one if statement in your code
 * You are not allowed to use more than one while loop in your code
 * If s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
 * You are only allowed to declare these two variables in this function:
 * op_t ops[] = {
 * {"+", op_add},
 * {"-", op_sub},
 * {"*", op_mul},
 * {"/", op_div},
 * {"%", op_mod},
 * {NULL, NULL}};
 * int i;
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	while (i < 5)
	{
		if (*((*(ops + i)).op) == *s)
		{
			return ((*(ops + (i))).f);
		}
		i++;
	}

	return (NULL);
}
