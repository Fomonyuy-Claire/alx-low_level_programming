#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lena = 0;
	int o;

	while (*s != '\0')
	{
		lena++;
		s++;
	}
	s--;
	for (o = lena; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
