#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int c = sizeof(char);
int i = sizeof(int);
int l = sizeof(long int);
int m = sizeof(long long int);
int f = sizeof(float);

printf("Size of a char: %d byte(s)\n", c);
printf("Size of an int: %d byte(s)\n", i);
printf("Size of a long int: %d byte(s)\n", l);
printf("Size of a long long int: %d byte(s)\n", m);
printf("Size of a float: %d byte(s)\n", f);
return (0);
}
