#include "main.h"
/**
 * *_memcpy - Copies memory area.
 * @dest: destination area
 * @src: copies memory area
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
