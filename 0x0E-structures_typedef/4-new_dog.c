#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: newdog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *rex;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	rex = malloc(sizeof(dog_t));
	if (rex == NULL)
	{
		free(rex);
		return (NULL);
	}
	rex->name = malloc(i * sizeof(rex->name));
	if (rex->name == NULL)
	{
		free(rex->name);
		free(rex);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		rex->name[k] = name[k];
	rex->age = age;
	rex->owner = malloc(j * sizeof(rex->owner));
	if (rex->owner == NULL)
	{
		free(rex->owner);
		free(rex->name);
		free(rex);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		rex->owner[k] = owner[k];
	return (rex);
}
