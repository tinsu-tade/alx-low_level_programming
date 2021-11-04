<<<<<<< HEAD
#include "main.h"
void _puts_recursion(char *s)
{
  int count = 0;

  if(s[i] ! = '\0')
    {
      _putchar(s[i])
	i++;
      _puts_recursion(&s[i]);

    }
  else
    {
      _putchar('\n');
    }

=======
#include<stdio.h>
#include "holberton.h"
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
		count++;
		_puts_recursion(&s[count]);
	}
	else
	{
		_putchar('\n');
	}
>>>>>>> 8252a2b52a3d8a1b24ff69b4e22a96e01e0532e2
}
