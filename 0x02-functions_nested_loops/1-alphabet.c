#include "main.h"

/**
 * main - entry point 
 * 
 * a function that prints the alphabet
 *
 * Return: Always 0 Sucess
 */

void print_alphabet(void)
{

	for (int ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');
	return (0);
}
