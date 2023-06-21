#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - the function prints a name
 * @name: parameter to the functioin
 * @f: function pointer to the address of name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

	if (!name || !f)
		return;
}
