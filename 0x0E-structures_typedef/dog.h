#ifndef DOG_H
#define DOG_H
/**
 * struct dog - owner of dog
 * @name: dog name
 * @age: his age
 * @owner: his owner
 *
 * Description: informaition about dog
 */
typedef struct dog dog_t;
struct dog
{
char *name;
float age;
char *owner;
};
#endif /* DOG_H */

#ifndef FUNCTION_H
#define FUNCTION_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*  FUNCTION_H */

