#include <stdlib.h>
#include "dog.h"
#include "1-memcpy.h"
#include "2-strlen.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 * Return: pointer to new array created for new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int nlen, olen;

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
		return (NULL);
	nlen = _strlen(name);
	nw_dog->name = malloc(sizeof(char) * nlen + 1);
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	_memcpy(nw_dog->name, name, nlen);

	olen = _strlen(owner);
	nw_dog->owner = malloc(sizeof(char) * olen + 1);
	if (nw_dog->owner == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	_memcpy(nw_dog->owner, owner, olen);

	nw_dog->age = age;
	return (nw_dog);

