#include <stdio.h>
int main(void) 
{
int c = sizeof(char);
int i = sizeof(int);
int l = sizeof(long);
int f = sizeof(float);
  
printf("Size of a char: %d byte(s)\n", c);
printf("Size of a int: %d byte(s)\n", i);
printf("Size of a long int: %d byte(s)\n", 4);
printf("Size of a long long int: %d byte(s)\n", l);
printf("Size of a float: %d byte(s)\n", f);
return (0);
}
