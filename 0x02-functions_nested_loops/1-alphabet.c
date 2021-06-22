#include<stdio.h>
void print_alphabet(void);
int main(void)
{
void print_alphabet();
return (0);
}

void print_alphabet(void)
{
char ch = 'a';
while(ch < 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
