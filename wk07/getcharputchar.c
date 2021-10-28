/* 
	Simple walkthrough on how to use getchar and putchar
*/
#include<stdio.h>


int main(void) {
    // Get a single character as an integer
    int c = getchar();

    // One way of printing
    printf("%d: %c\n", c,c);    

    // You can check for EOF like this
    // This is because getchar is always gonna be positive if it is a character
    if (c < 0) {
        printf("This is EOF!\n");
    }

    // Alternatively:
    if (c == EOF) {
      printf("This is EOF!\n");
    }

    // Print the character
    putchar(c);
    // This does the same thing as:
    // printf("%c", c);

    // // Go to a new line because putchar doesn't do it
    putchar('\n');
    // same as printf("\n");

    // Loop printing until EOF
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    printf("\n");
    printf("finished!\n");
    return 0;
}
