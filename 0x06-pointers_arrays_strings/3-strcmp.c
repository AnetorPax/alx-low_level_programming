#include"main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: the result of comparing s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	res = _strcmp(s1, s2);
	{
		if (res == 0)
		{
			return (0);
		}
		else if (res < 0)
		{
			return (-1);
		}

		else 
		{
			return (+1);
		}
	}
	return ('\n');
}
