#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name 
 * @name: name of the person
 *
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
(*f)(name);
}
