#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Generates a random valid password
 *
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];  /* +1 for null terminator */
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	/* Initialize the random number generator */
	srand(time(NULL));

	/* Generate random characters for the password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) / sizeof(char) - 1)];
	}

	password[PASSWORD_LENGTH] = '\0';  /* Add null terminator */

	/* Print the generated password */
	printf("Generated password: %s\n", password);

	return 0;
}
