#include <stdio.h>

int main(void) {
    
    int chr;
    chr = getchar();

    putchar(chr);

    printf("\ngetchar returned %d\n", chr);

    // compare getchar and scanf
    // chr = getchar();
    // scanf("%c", &chr);
    return 0;
}

