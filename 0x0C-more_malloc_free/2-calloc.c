#include "main.h"

/**
 * _calloc - unction that allocates memory for an array, using malloc.
 *
 * @nmemb: array of elements.
 * @size: size of the array
 * Return: pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* allocate memory and check if error */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0; /* type cast assigning values*/

	return (ptr);


}
