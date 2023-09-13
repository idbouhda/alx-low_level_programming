#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - prints element of an array.
 * @array: pointer
 * @size: integer
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
unsigned int i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
for (j = 0; j < size; j++)
{
printf("0x%x\n", array[j]);
}
}
