/**
 * _strlen - check the code
 *@s: character pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
int counter = 0;
while( *s != '\0')
{
s++;
counter++;
}
return (counter);
}
