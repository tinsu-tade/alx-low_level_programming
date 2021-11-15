#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

int main(void)
{
for(char i = 48; i <= 57; i++)
{      
for (char k = i+1; k <= 57 ; k++)
{
if(i<57 || k<57)
{
putchar(i);
putchar(k);
putchar(',');
putchar(' ');
}
else
{
putchar(i);
putchar(k);         
}   

}	

} 
}


