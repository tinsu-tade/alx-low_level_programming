#include "stdio.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer with the address of the string
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int count = 0;

	if (s[count] != '\0')
	{
		_putchar(s[count]);
		i++;
		_puts_recursion(&s[count]);
	}
	else
	{
		_putchar('\n');
	}
}
