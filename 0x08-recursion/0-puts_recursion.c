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

	if (i >= 0)
	{
		 _putchar(s[i]);
_putchar('\n');
return;
	}
	_puts_recursion(s);
}

