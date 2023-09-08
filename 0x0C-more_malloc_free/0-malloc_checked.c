#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: integer
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = (void *)malloc(b);
printf("%p\n", (void *)ptr);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
