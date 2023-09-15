#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two digits
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two digits
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the prodeuct of two digits
 * @a: first digit
 * @b: second digit
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of two digits
 * @a: the first digit
 * @b: second digit
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modifies two digits
 * @a: first digit
 * @b: second digit
 * Return: modification of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
