#ifndef DOG
#define DOG

/**
 * struct dog - Class of dogs
 *
 * @name: Dog name
 *
 * @age: Dog age
 *
 * @owner: Dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG.H*/
