#include<unistd>
/**
*_putchar - writes a char to standard output and returns integer on succes
*@c: charachter as an argument
*
*Return: returns integer
*/
int _putchar(char c)
{
return write(1,&c,1);
}
