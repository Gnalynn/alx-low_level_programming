#include "main.h"

/**
 * *_memset - Fills memory with a constant byte.
 * @n: number of bytes
 * @s: pointed area
 * @b: constant byte
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}i
