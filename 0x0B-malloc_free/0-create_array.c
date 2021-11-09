#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 *creates an array of chars and initialize it with specfic char.
 *@size:intended size
 *@s:intended chrater
 *
 *Returns null or pointer
 */
char *create_array(unsigned int size, char s)
{
    char *ptr;
    unsigned int i;
    ptr = malloc((size+1)*sizeof(p));
    if(ptr == NULL)
    {
     return (NULL);
    }
    i = 0;
    while(i < size)
    {
      ptr[i] = s;
      i++;
    }
    ptr[i] = '\0';
    return ptr;
     	
   
}
