#include <stdio.h>

int main (void) {
    char c;

    c = 'a';
    printf("%c=%d\n", c, c);

    c = ' z';
    printf("%c=%d\n", c, c);

    c = 'a';
    printf("%c=%d\n", c, c);

    for (c = ' a'; c <= 'z'; c++){
        printf("%c", c);
    }
    printf("\n");

    return 0;
}