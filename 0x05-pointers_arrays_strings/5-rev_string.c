#include "main.h"
/**
 * rev_string - Reverse a string
 * @s:the string to be reversed
 */
void rev_string(char *s)
{
	/* Declaring variables */
	int len;
	int start, end;
	char temp;



	/* To handle NULL input strings */
	if (s == NULL)
	{
		return;
	}

	/* Calculating the length of the string*/
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	start = 0;
	end = len - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
