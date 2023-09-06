#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars.
 * @size: the size of the memory to print
 * @c: character
 *
 * Return: NULL if size = 0, otherwise rturnsa pointer to the array.
 */


char *create_array(unsigned int size, char c)
{

char *buffer = NULL;
(void)c;
if (size == 0)
{
return (NULL);
}
else if (size != 0)
{

buffer = (char *)malloc(size * sizeof(char));
if (buffer != 0)
{
unsigned int i;
for (i = 0; i < size; i++)
c = buffer[i];
}
}
return (buffer);
}

