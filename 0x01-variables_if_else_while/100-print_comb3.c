#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

int main(void)
{
int i;
for( i = 48; i <= 57; i++)
{ 
int k;
for (k = i + 1; k <= 57 ; k++)
{
if( i<57 || k<57)
{
putchar(i);
putchar(k);
putchar(',');
putchar(' ');
}
else
{
putchar(i);       
} 
}
}
return 0;
}


