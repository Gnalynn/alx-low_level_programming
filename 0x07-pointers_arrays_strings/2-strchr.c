#include "main.h"

/**
 * *_strchr - Localtes a string
 * @s: pointer to char
 * @c: character
 * Return: NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
© 2022 GitHub, Inc.
Terms
Privacy
Security

