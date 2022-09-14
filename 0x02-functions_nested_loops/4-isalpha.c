#include "main.h"
/**
 * _isalpha - Prints a checked letter
 * @c: letter u other
 * Return: Always(successful)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
