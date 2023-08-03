#include "main.h"

/**
 *  _pow_recursion - returns the value of x pow y
 *
 *  @x: number
 *  @y: the power of the number
 *  Return: the valuse of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
