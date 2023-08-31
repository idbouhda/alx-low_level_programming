#include <stdio.h>
#include "main.h"
/**
 * natural_sqrt - returns the root of a natural number.
 * @i: integer
 * @j: integer
 *
 * Return:  Always 0.
 */
int natural_sqrt(int i, int j)
{
if (i * i > j)
{
return (-1);
}
else if (i * i == j)
{
return (i);
}
natural_sqrt(i + 1, j);
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recursion(natural_sqrt(1, n)));
}
