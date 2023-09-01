#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  main -  prints the number of arguments passed into the program
 * @ac: integer
 * @av: character
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int i;

for (i = 0; i < ac; i++)
{
int length = strlen(av[i]);

printf("%d", length);
printf("\n");
}
return (0);
}
