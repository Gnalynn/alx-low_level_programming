#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		b++;

	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
