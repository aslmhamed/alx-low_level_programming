#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int deci = 0;
int s_len = 0, x = 1;

if (!ch_val_str(b))
return (0);

while (b[s_len] != '\0')
s_len++;

while (s_len)
{
deci += ((b[s_len - 1] - '0') * x);
x *= 2;
s_len--;
}
return (deci);
}

/**
 * ch_val_str - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int ch_val_str(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
