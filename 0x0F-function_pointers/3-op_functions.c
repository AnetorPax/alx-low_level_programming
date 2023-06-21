#include "3-calc.h"

/**
 * op_add - adds two integer numbers
 * @a: first interger
 * @b: second integer
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	int Sum;

	Sum = a + b;
	return (Sum);
}

/**
 * op_sub - Outputs the difference between two integers
 * @a: first interger
 * @b: second integer
 * Return: Difference between a and b
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - Multiplies two integers
 * @a: first interger
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - Outputs the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: Division of a by b
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - outputs the remainder of a divided by b
 * @a: first parameter
 * @b: second parameter
 * Return: remainder value
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
