#include <stdio.h>
#include <stdlib.h>

/**
 *  main -  prints the name of program.
 * @ac: integer
 * @av: character
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
(void)ac;
printf("%s", av[0]);
printf("\n");
return (0);
}
