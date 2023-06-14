#include "main.h"
#include <string.h>
#include <stdlib.h>

int count_words(char *str);
char **allocate_memory(int word_count);
int get_word_length(char *str);
void free_memory(char **words, int word_count);

/**
 * strtow - splits strings into words
 * @str: The string to be splited
 * Return: NULL if str == NULL or str == "", of if failure occurs otherwise
 * point to an array of string(words)
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len;

	/* meeting string requirements */
	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = allocate_memory(word_count);
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ')
			str++;

		len = get_word_length(str);
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			free_memory(words, i);
			return (NULL);
		}

		for (j = 0, k = 0; j < len; j++, k++)
			words[i][k] = str[j];
		words[i][k] = '\0';

		str += len;
	}
	words[word_count] = NULL;
	return (words);
}

/**
 * count_words - Counts words in a string
 * @str: the string to be counted
 * Return: count
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		len++;
		i++;
	}

	return (count);
}

/**
 * allocate_memory - Allocates memory to a function
 * @word_count: parameter to the function
 * Return: words
 */
char **allocate_memory(int word_count)
{
	char **words;

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	return (words);
}

/**
 * get_word_length - finds the length of each word
 * @str: the string to be examined
 * Return: length of the word
 */
int get_word_length(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != ' ' && str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * free_memory - frees allocated memory
 * @words: parameter to the function
 * @word_count: parameter to the function
 */
void free_memory(char **words, int word_count)
{
	int i;

	for (i = 0; i < word_count; i++)
		free(words[i]);

	free(words);
}
