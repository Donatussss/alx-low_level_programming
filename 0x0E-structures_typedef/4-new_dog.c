#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of string
 * @s: pointer to first char in string
 * Return: int length of string
 */

int _strlen(char *s)
{
	int str_len = 0;
	char comp = *s;

	while (comp != '\0')
	{
		str_len++;
		comp = *(s + str_len);
	}

	return (str_len);
}

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: string provided
 * @new_str: target_str
 * Return: a pointer to a new string which is a duplicate of
 * the string str
 * NULL if str = NULL
 * NULL if insufficient memory was available
 */

char *_strdup(char *new_str, char *str)
{
	int strlen;
	int i = 0;
	void *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	strlen = _strlen(str);
	temp = malloc(sizeof(char) * strlen + 1);

	if (temp == NULL)
	{
		return (NULL);
	}

	new_str = (char *)temp;

	while (i < strlen)
	{
		*(new_str + i) = *(str + i);
		i++;
	}

	*(new_str + i) = '\0';

	return (new_str);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog1;
	char *name_temp = NULL;
	char *owner_temp = NULL;

	dog1 = malloc(sizeof(struct dog));

	if (dog1 == NULL)
		return (NULL);

	name_temp = _strdup(name_temp, name);

	if (name_temp == NULL)
	{
		free(dog1);
		return (NULL);
	}

	owner_temp = _strdup(owner_temp, owner);

	if (owner_temp == NULL)
	{
		free(dog1);
		free(name_temp);
		return (NULL);
	}

	dog1->name = name_temp;
	dog1->age = age;
	dog1->owner = owner_temp;

	return (dog1);
}
