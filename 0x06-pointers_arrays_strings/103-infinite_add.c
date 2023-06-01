#include "main.h"
/**
 * char *infinite_add - Adds two numbers
 * @n1: first number to be added
 * @n2: second number
 * @r: the buffer that holds the result.
 * @size_r: size of buffer
 * Return: the buffer r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum = 0;
	int len1 = 0;
	int len2 = 0;
	int max_len = 0;
	int i, j, k;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	max_len = (len1 > len2) ? len1 : len2;
	if (max_len >= size_r - 1)
		return (0);
	for (i = len1 - 1, j = len2 - 1, k = max_len - 1; k >= 0; i--, j--, k--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	if (carry)
	{
		if (max_len + 1 >= size_r)
			return (0);
		for (i = max_len; i >= 0; i--)
			r[i + 1] = r[i];
		r[0] = carry + '0';
		r[max_len + 1] = '\0';
	}
	else
		r[max_len] = '\0';
	return (r);
}
