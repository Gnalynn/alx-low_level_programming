#include "main.h"
/**
 * main - Entry point
 *
 * Desription: prints  _putchar and return 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
	return (0);
i}
