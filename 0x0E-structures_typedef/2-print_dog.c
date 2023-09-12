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

if ((*d).name == NULL)
{
printf("Name:(nil)\nAge : %.1f\nOwner : %s\n", (*d).age, (*d).owner);
}
else if ((*d).owner == NULL)
{
printf("Name: %s\nAge: %.1f\nOwner: (nil)\n", (*d).name, (*d).age);
}
else
{
printf("Name: %s\n", (*d).name);
printf("Age: %.1f\nOwner: %s\n", (*d).age, (*d).owner);
}

}
