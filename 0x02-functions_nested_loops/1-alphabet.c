#include<stdio.h>
#include "holberton.h"
/**
* main - Entry point
*
* Return: Success (0)
*/

void print_alphabet(void)
{
char ch = 'a';
  
while(ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
