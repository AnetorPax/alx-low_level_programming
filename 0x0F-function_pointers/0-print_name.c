#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name of the pwrson
 * @*f: pointer to the function for print_name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
