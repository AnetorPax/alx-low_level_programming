#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Skip leading non-digit characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the remaining digits to an integer */
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		/* Handle potential overflow */
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) &&
						(s[i] - '0') > (INT_MAX % 10)))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
