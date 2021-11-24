/**
 * _puts - prints a char
 *@str: character pointer
 * Return: nothing.
 */
void _puts(char *str)
{
while(*str != '\0')
{
putchar(*str);
str++;
} 
}
