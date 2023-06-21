#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - the function prints a name
 * @name: parameter to the functioin
 * @f: function pointer that points to the chosen printing behaviour.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
