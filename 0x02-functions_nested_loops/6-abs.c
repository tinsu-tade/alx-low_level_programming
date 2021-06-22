#include <stdio.h>
#include "holberton.h"

int _abs(int c)
{
   if(c == 0)
       return 0;
   else if(c > 0)
       return c;
       else
       return -(c);
}
