#include <stdio.h>
#include "holberton.h"

void jack_bauer(void)
{
   int h = 0;
   while(h < 24)
   {
          int m = 0;
          while (m < 60)
          {
              if(m < 10 && h< 10)
              printf("0%d:0%d", h, m);
              else if(m<10)
              printf("%d:0%d", h, m);
              else if(h<10)
              printf("0%d:%d", h, m);
              else
            printf("%d:%d", h, m);
             printf("\n");
            m++;
          }
          h++;
   }
}
