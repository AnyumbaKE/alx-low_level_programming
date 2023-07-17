#include "dog.h"
/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: ponter to struct type dog
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
