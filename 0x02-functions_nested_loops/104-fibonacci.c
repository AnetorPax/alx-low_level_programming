#include <stdio.h>
#include <gmp.h>
/**
 * print_fibonacci_sequence - Prints the fibonacci sequence of n
 * @n: The parameter to be examined
 */
void print_fibonacci_sequence(int n)
{
	int i;
	mpz_t prev, curr, next;

	mpz_init_set_ui(prev, 1);
	mpz_init_set_ui(curr, 2);

	printf("%s, ", mpz_get_str(NULL, 10, prev));
	printf("%s, ", mpz_get_str(NULL, 10, curr));

	for (i = 3; i <= n; i++)
	{
		mpz_init(next);
		mpz_add(next, prev, curr);

		gmp_printf("%Zd", next);


		if (i != n)
		{
			printf(", ");
		}

		mpz_set(prev, curr);
		mpz_set(curr, next);
		mpz_clear(next);
	}
	printf("\n");

	mpz_clear(prev);
	mpz_clear(curr);
}

/**
 * main - prints fibonacci sequence using print_fibonacci_sequence function.
 * Return: 0 Always successful
 */
int main(void)
{
	int n;

	n = 98;
	print_fibonacci_sequence(n);
	return (0);
}
