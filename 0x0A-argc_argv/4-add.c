#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 * @ac: integer
 * @av: character
 *
 * Return: Always 0 or 1.
 */
int main(int ac, char  **av)
{
int k = 0;
char *c;

if (av[1] == NULL)
{
return (printf("0\n"));
}
while (--ac)

{
for (c = ac[av]; *c; c++)
if (*c < '0' || *c > '9')
{
printf("Error\n");
return (1);
}
k += atoi(av[ac]);
}
printf("%d\n", k);
return (0);
}
