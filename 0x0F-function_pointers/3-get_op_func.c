#include "3-calc,h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform
 * @s: the operator as argument
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
}
