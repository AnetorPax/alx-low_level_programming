#include "main.h"
/**
 * argstostr - Concatenates all arguement of the program
 * @ac: Argument Counter
 * @av: Argument Vector
 * Return: Concatenated argument.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int len = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	/* To find the length of the concatenanted string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	/* Allocating memory to the concatenated string based on length */
	str = malloc((len + 1) * sizeof(char));
	/* test if allocation successful */
	if (str == NULL)
		return (NULL);

	/* concatenate each argument into the string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
