#include <stdio.h>
/**
 * swap_int - swaps integer
 *@a: integer pointer
 *@b: integer pointer
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
