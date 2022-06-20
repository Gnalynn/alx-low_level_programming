#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: string
 * @accept: bytes
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	x = 0;

	while (*(s + x))
	{
		y = 0;
		while (*(accept + y))
		{
			if (*(s + x) == *(accept + y))
			{
				break;
			}
			y++;
		}
		if (!*(accept + y))
		{
			return (x);
		}
		x++;
	}
	return (x);
}
