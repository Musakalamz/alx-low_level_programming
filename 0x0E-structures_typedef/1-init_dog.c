/*
 * File: 1-init_dog.c
 * Auth: Musa_kalamz A Ogunsolu
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The initialized dog name.
 * @age: The initialized dog age.
 * @owner: The owner of the initialized dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
