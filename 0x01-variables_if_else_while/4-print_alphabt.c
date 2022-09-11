#include<stdio.h>

/**
 * * main - prints alphabwths except q and e
 *
 * Return: Always(successful)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);

}


