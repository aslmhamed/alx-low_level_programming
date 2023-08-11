#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: concant to strings
 *
 * Return: return a pointer to new alloc space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1_len, s2_len;

	/* check if strings passed are null*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* compute strings length*/

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/* allocated memory*/

	str = malloc(s1_len + n + 1);
	if (str == NULL)
		return (NULL);

	/* copy first string into str*/

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = str[s1];

	/*copy second string to str*/

	for (j = 0; j < n; j++)
	{
		str[i] = str[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
