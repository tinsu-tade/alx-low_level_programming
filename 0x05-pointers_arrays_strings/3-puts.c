#include "main.h"
/**
 * _puts - prints a char
 *@str: character pointer
 * Return: nothing.
 */
void _puts(char *str)
{
while(*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
