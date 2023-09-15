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
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]));
return (i);
}
return (-1);
}
