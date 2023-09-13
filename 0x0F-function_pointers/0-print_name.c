#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
(void)(*f);
printf("%s", name);
}

/**
 * f - prints a name
 * @name: name of the person
 *
 * Return: Nothing.
 */
void f(char *name)
{
if (name == NULL)
{
return;
}
(*f)(name);
}
