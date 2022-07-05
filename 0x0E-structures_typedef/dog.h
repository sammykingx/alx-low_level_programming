#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creating a user-defined struct dog data type
 * @name: to rep name
 * @age: to rep the age
 * @owner: to rep owner
 * author: Sammykingx
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
