#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add  -  performs addition
 *
 * @a: integer
 * @b: integer
 *
 * Return: return the result of the add.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub  -  performs subtraction
 *
 * @a: integer
 * @b: integer
 *
 * Return: return the result of the sub
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul  -  performs multiplication
 *
 * @a: integer
 * @b: integer
 *
 * Return: return the result of the mul
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div  -  performs  division
 *
 * @a: integer
 * @b: integer
 *
 * Return: return the result of the div
 */
int op_div(int a, int b)
{


if (b == 0)
{
printf("Error\n");
exit(100);
}
else
return (a / b);
}

/**
 * op_mod  -  performs  division
 *
 * @a: integer
 * @b: integer
 *
 * Return: return the result of the mod
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
else
return (a % b);
}
