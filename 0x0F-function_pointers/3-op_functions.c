#include "3-calc.h"
/**
 * op_add - calcuulates the sum of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference between 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: Difference of a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: first integer
 * @b: second integer
 * Return: product of a multiplied by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two numbers
 * @a: first integer
 * @b: second integer
 * Return: the result of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of the division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
