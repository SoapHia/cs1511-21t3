// Tutorial Week 4, Q20
#include<stdio.h>

int main(void) {
    // q20: how we could create a loop that would continually read values in 
    // from standard input until the user inputs anything other than a number 
    // (or the input ends with CTRL+D)
    int input;
    
    
    while (scanf("%d", &input) == 1) {
        printf("Enter more stuff:\n");
    }
    
    printf("The end\n");

    

    return 0;
}
