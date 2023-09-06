#include <string.h>
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
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
else
{
while (i < size)
{
buffer = malloc(size * sizeof(char));
c = buffer[i];
printf("%d", c);
i++;
}
printf("\n");

}
return (buffer);
}
