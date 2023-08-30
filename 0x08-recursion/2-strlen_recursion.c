#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
{
	return (0);
} else
	{
return (1 + strlen_recursion(s + 1));
_putchar(*s);
	}
}
