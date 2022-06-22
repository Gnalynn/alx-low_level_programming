#include "main.h"
/**
 * is_square_root - determines the square root of
 * @j: an input value
 * @i: input value
 *
 * Description: determines the square root
 * Return: returns the input val
 */

int is_square_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (is_square_root(i, j + 1));
}

