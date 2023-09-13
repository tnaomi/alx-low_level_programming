#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create a new struct based on dog_t
* @name: Dog name
* @age: Dog age
* @owner: Dog owner
* Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *pntr;
	unsigned int indx, indxn, indxo;

	if (name == NULL || owner == NULL)
		return (NULL);
	pntr = malloc(sizeof(dog_t));
	if (pntr == NULL)
		return (NULL);
	for (indxn = 0; name[indxn];)
	{
		indxn++;
	}
	pntr->name = malloc(indxn);
	if (pntr == NULL)
		return (NULL);
	for (indx = 0; indx < indxn; indx++)
	{
		pntr->name[indx] = name[indx];
	}
	if (age > 0)
		pntr->age = age;
	for (indxo = 0; owner[indxo];)
	{
		indxo++;
	}
	pntr->owner = malloc(indxo);
	for (indx = 0; indx < indxo; indx++)
		pntr->owner[indx] = owner[indx];
	return (pntr);

}
