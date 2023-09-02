#include <stdio.h>
#include <stdlib.h>
/**
 *  main -  prints all arguments it receives.
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
printf("\n%s", av[i]);

printf("\n");

}
return (0);
}

