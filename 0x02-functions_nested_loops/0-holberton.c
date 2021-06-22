#include<stdio.h>
**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
int i = 0;
char a[] = "Holberton";
     
while (i < 9)
{
putchar(a[i]);
i++;
}
putchar('\n');
return (0);
}
