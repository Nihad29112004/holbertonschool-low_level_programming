#include "main.h"

/**
 * _is_prime - Helper function to check prime recursively.
 * @n: Number to check.
 * @divisor: Current divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int _is_prime(int n, int divisor)
{
if (n <= 1)
return (0);
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (_is_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: Number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (_is_prime(n, 2));
}
