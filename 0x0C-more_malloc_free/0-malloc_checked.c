#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer.
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);

}
