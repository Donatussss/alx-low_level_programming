#ifndef HIHIHI
#define HIHIHI

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
