#include "main.h"
/**
 * main - Prints the value of _putchar
 *
 * Return: 0 Always successful.
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}

	_putchar(10);
	return (48);
}
