#ifndef HIHIHI
#define HIHIHI

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
