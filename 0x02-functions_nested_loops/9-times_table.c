#include <stdio.h>
#include "holberton.h"

void times_table(void)
{
 int h = 0;
   while(h < 10)
   {
    int m = 0;
          while (m < 10)
          {
            if(m == 9)
             printf("%d  ", h*m);
             else
             printf("%d, ", h*m);
             m++;
          }
          printf("\n");
          h++;
   }
}
