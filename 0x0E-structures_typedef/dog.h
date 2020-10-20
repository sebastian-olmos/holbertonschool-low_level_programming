#ifndef DOG_H
#define DOG_H

/**
 * struct dog - definition type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;

}
my_dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
