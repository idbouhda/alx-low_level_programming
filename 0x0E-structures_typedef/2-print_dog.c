#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: Variable to initialize.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
exit(0);
if ((*d).name == NULL && (*d).owner != NULL)
{
printf("Name:(nil)\nAge: %f\n", (*d).age);
printf("Owner : %s\n", (*d).owner);
}
else if ((*d).owner == NULL && (*d).name != NULL)
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\nOwner: (nil)\n", (*d).age);
}
else if ((*d).name == NULL && (*d).owner == NULL)
{
printf("Name:(nil)\nAge: %f\n", (*d).age);
printf("Owner: (nil)\n");
}
else
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\nOwner: %s\n", (*d).age, (*d).owner);
}

}

