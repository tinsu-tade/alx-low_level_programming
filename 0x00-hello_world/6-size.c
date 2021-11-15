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

printf("Size of a char: %zu byte(s)\n", c);
printf("Size of an int: %zu byte(s)\n", i);
printf("Size of a long int: %zu byte(s)\n", l);
printf("Size of a long int: %zi byte(s)\n", m);
printf("Size of a float: %zu byte(s)\n", f);
return (0);
}
