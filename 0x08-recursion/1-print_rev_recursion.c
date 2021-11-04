#include<stdio.h>
#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer with the address of the string
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int count = 0;

	if (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
		_void _print_rev_recursion(char *s);(&s[count]);
	}
	else
	{
		_putchar('\n');
	}
}
