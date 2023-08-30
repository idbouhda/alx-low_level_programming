#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
int i = 0;

if (i  < 48)
{
_putchar('\n');
_putchar(s[i]);
i++;
return;
}
	_puts_recursion(s+1);
}

