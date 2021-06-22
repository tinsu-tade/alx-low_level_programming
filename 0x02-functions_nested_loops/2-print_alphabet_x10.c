#include<stdio.h>
#include "holberton.h"
/**
* main - Entry point
*
* Return: Success (0)
*/
void print_alphabet_x10(void){
    int i = 0;
    
    while (i < 10){
        char ch = 'a';
        while (ch <= 'z'){
            putchar(ch);
            ch++;
        }
        putchar('\n');
        i++;
    }
}
