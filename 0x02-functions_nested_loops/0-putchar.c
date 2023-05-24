gcc -Wall _putchar.c 0-putchar.c -o 0-putchar#include "main.h"
/**
 * main - Prints the value of _putchar
 * @c: The string to be printed
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
