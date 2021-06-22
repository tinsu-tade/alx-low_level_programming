#include<stdio.h>
#include "holberton.h"

void print_alphabet(void)
{
char ch = 'a';
while(ch < 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
