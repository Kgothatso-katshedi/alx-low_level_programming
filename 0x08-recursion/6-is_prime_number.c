#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @a: factor check
 * @b: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int a, int b)
{
	if (a < 2 || a % b == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (prime_check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
