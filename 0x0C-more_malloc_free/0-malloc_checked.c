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
int *ptr;
int x = 98;
ptr = (int *)malloc(b * sizeof(int));
printf("%p\n", (void *)ptr);
free(ptr);
if (ptr == NULL)
{
int *p = &x;
return (p);
}
return (ptr);
}
