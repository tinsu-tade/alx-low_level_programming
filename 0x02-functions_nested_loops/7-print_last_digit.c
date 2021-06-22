#include <stdio.h>
#include "holberton.h"

int print_last_digit(int c)
{
   c = c % 10;
   return (c)+(c*10);
}
