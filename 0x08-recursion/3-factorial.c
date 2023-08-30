#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
