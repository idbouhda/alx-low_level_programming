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
(void)av;
printf("%d", ac - 1);
printf("\n");
return (0);
}
