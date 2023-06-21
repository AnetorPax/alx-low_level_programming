#include "3-calc.h"
/**
 * get_op_func -  selects the correct function to perform the operation
 * asked by the user
 * @s: pointer to a string that contains the selected operator by the user
 * Return: a pointer to the correct function selected by the user in s
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

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
