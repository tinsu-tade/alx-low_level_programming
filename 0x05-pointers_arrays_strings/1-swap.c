#include <stdio.h>
/**
 * swap_int - swaps integer
 *
 * Return: nothing.
 */
void swap_int(int *a,int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
