#include<stdio.h>
/*

a program to demo the use of argc and argv

*/

int main(int argc, char *argv[]) {
    printf("argc is: %d\n", argc);

    printf("argv contains: ");
    int i = 0;
    while (i < argc) {
        
        printf("%s ", argv[i]);

        i++;
    }
    
    printf("\n");

    return 0;

}
// Follow up questions:
// How can we access letters in a specific position?

// How is this different from scanf?
