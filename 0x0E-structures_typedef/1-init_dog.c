#include <stdio>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
