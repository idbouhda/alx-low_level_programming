#include <stdio.h>
#include <stdlib.h>
/**
 * multiplies - multiplies two numbers
 * @n: integer
 * @m: integer
 *
 * Return: Always 0.
 */
int multiplies(int n, int m)
{
return (n * m);
}
/**
 *  main - program that multiplies two numbers.
 * @ac: integer
 * @av: character
 *
 * Return: Always 0 or 1.
 */
int main(int ac, char  **av)
{
(void)ac;
int k, i;

for (i = 1; i < 2; i++)
{
if (av[i] == NULL)
{
printf("Error\n");
return (1);
}
else
{
int l = atoi(av[1]);
int h = atoi(av[2]);
k = multiplies(l, h);
printf("%d\n", k);
break;
}
}
return (0);
}

