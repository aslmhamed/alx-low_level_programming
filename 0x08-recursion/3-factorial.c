#include "main.h"

/**
 * factorial - return the factorail of given number
 *
 * @n: number
 * Return: factorail of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * facortal(n - 1));


}
