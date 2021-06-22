#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char a[] = "Holberton";

while (i < 9)
{
putchar(a[i]);
i++;
}
putchar('\n');
return (0);
}
