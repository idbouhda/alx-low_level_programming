#include "function_pointers.h"
#include <stdio.h>


/**
 * int_index - prints element of an array.
 * @array: pointer
 * @size: integer
 * @cmp: pointer to function
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
for (i = 0; i < size; i++)
{
if (size <= 0)
{
return (-1);
}
else
{
(*cmp)(array[i]);
}
}
return (0);
}
