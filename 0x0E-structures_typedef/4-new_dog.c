#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
*new_dog - creates a new dog.
*@name: name
*@age: age
*@owner: owner
*Return: doggy
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, o = 0;
	dog_t *doggy;

	if (name != NULL && owner != NULL)
	{
		n = _strlen(name);
		o = _strlen(owner);
		doggy = malloc(sizeof(dog_t));
		if (doggy == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->name = malloc(n);
		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->owner = malloc(o);
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}
		doggy->name = _strcpy(doggy->name, name);
		doggy->age = age;
		doggy->owner = _strcpy(doggy->owner, owner);
	}
	return (doggy);
}

/**
*_strlen - returns the length of a string
*@s: pointer
*Return: 0
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
	return (0);
}

/**
**_strcpy - copies the string pointed to by src
*@dest: pointer to string
*@src: buffer to point
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
