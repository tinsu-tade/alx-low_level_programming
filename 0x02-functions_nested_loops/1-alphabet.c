#include<stdio.h>
void printAlpha();
int main(void)
{
printAlpha();
return (0);
}

void printAlpha()
{
char ch = 'a';
while(ch < 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
