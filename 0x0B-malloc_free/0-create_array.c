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
<<<<<<< HEAD
    ptr = malloc((size)*sizeof(s));
=======
    ptr = malloc((size)*sizeof(s));
>>>>>>> d6ec81e448f09fdb307756e1f0145733d3434757
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
