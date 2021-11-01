#ifndef HEADER
#define HEADER

/**
*struct dog - Define a new type struct dog
*@name: name
*@age: age
*@owner: owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
