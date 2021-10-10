// Demo of an early return in main when there's an error
#include<stdio.h>

int main(void) {
    int input;
    
    scanf("%d", &input);
    
    
    if (input == 2) {
        printf("Input should never be 2!! Return with error 1\n");
        return 1;
    }
    
    // code for when input is not 2
    printf("not printed\n");


    return 0;
}
