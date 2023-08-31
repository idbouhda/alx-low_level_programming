#include <stdio.h>
#include "main.h"



/**
 * prime_number -  the function return 1 or 0;
 * @i: integer
 * @j: integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime_number(int i, int j)
{
if (i <= 0)
return (0);
else if (i > j && i % j == 0)
return (0);
else if (i > j && i % j != 0)
return (1);
return (prime_number(i, j + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
return (prime_number(n, 1));
}

