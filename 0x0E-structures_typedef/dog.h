#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - owner of dog
 * @name: dog name
 * @age: his age
 * @owner: his owner
 *
 * Description: informaition about dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
#endif /* _DOG_H */

#ifndef _FUNCTION_H
#define _FUNCTION_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _FUNCTION_H */

