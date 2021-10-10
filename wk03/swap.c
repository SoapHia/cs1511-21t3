/*
   Demo on how to swap 2 variables
*/
#include<stdio.h>


int main(void) {
    int a = 2;
    int b = 5;
    int tmp;
    
    if (a < b) {
        // swap into order
        tmp = a; // tmp = 2
        a = b;  // a =5
        b = tmp; // b = tmp = 2
    } 
    
    printf("a, b printed in descending order\n");
    printf("a > b: %d %d\n", a, b);
    
    return 0;
}
