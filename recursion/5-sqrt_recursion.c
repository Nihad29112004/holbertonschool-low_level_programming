#include "main.h"

/**
 * _sqrt_helper - Recursive helper to find natural square root.
 * @n: The number to find the square root of.
 * @x: Current guess for the square root.
 *
 * Return: natural square root of n or -1 if none.
 */
int _sqrt_helper(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: natural square root of n or -1 if none.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
