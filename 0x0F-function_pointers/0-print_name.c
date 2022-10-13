#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: name to be printed
 * @m: pointer to the function
 * Return: name
 */
void print_name(char *name, void (*m)(char *))
{
	if (!name || !m)
		return;
	m(name);
}
