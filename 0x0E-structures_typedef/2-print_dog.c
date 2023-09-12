#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d.name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if (d.age == NULL)
			printf("age: (nil)\n");
		else
			printf("age: %d\n", d.age);

		if (d.owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", (*d).owner);
	}


}
