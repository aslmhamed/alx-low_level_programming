#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: the array size.
 * @c: the stored chars.
 *
 * Return: Pointers of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(c));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ch[i] = c;
	return (ch);
}
