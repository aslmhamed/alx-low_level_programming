#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Negative or positive numbers.
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 5;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is zero", n, digit);
	else
		printf("Last digit of %d is %d and is less than 5", n, digit);
	return (0);
}
