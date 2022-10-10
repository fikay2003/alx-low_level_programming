#ifndef DOG_H
#define DOG_H
/**
 * struct dog - to group the variables of dog into one place.
 * @name: the value of the variable char
 * @age: the value of the variable float
 * @owner: the value of the variable char
 */
struct dog
{
char *name;
float *age;
char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dogdog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
