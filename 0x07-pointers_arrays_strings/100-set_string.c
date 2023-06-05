#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to char
 * @s: the string to be examined
 * @to: the value char value to be pointed to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
