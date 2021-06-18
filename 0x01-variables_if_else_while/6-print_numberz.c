#include<stdio.h>
/* code description here */

int main(void)
{
  int n;
  
  for(n = 0; n < 10; n++)
  {
    printf((n%10) + '0');
  }
  putchar('\n');
  return (0);
}
