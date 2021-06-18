#include <stdio.h>

int main() {
    // Write C code here
    printf("count alphabet");
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
        putchar('\n');
    }
    return 0;
}
