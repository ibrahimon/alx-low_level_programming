#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: Dog name
 * @age: Dog sge
 * @owner: Owner name
 * Return: dog_t array
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, dname, downer;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;
	for (downer = 0; owner[downer]; downer++)
		;

	ptr->name = malloc(dname + 1);
	ptr->owner = malloc(downer + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < dname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < downer; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
