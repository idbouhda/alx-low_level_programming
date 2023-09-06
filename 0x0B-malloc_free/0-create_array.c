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
(void)c;


char *buffer = NULL;

if (size == 0)
{
return (NULL);
}
else
{
for  (unsigned int i = 0; i < size; i++)
{
buffer = malloc(size * sizeof(char));
c = buffer[i];

i++;
}

}
return (buffer);
}
