#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
int m;
if (m * m > n)
{
return (-1);
}
return (_sqrt_recursion(n - 1));
}
