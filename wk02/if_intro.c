// Demo of conditions used in if statements
#include<stdio.h>

int main(void) {
    int num = -2;

    if (num >= 1) {
        printf("num is 1 or greater\n");
    } else if (num > 1) {
        // this will never be printed because if a number is >=1, the first case
        // will be executed and the rest of if-else is skipped.
        printf("num is greater than 1\n"); 
    } else {
        printf("num is not 1 or greater\n");
    }
    
    // demo of complex conditions
    num = 1;
    if ( num >0 && num < 5 && num != 1 && num != 3) {
        printf("num is between 0 and 5, and neither 1 or 3.\n");
    }
    
    // anything not zero is true.
    if (100) {
    
        printf("100 = true!\n");
    }
    
    return 0;
}
