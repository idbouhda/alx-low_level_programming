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
printf("Name:(nil)\nAge : %f\nOwner : %s\n", (*d).age, (*d).owner);
}
else if ((*d).owner == NULL)
{
printf("Name: %s\nAge: %f\nOwner: (nil)\n", (*d).name, (*d).age);
}
else if ((*d).name == NULL && (*d).owner == NULL)
{
printf("Name:(nil)\nOwner : (nil)\n");
printf("Age: %f\n", (*d).age);
}
else
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\nOwner: %s\n", (*d).age, (*d).owner);
}

}
