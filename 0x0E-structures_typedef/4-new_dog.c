#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);

	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	return (dog1);
}
