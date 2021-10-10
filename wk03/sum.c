#include<stdio.h>


int main(void) {
    // add up numbers from 1 to 5;
    
    int sum = 0;
    int counter = 1;
    
    while ( counter <= 5) {
        // sum = 3
        sum = sum + counter; // sum += counter;       
        
        counter++;
    }
    
    printf("sum of 1-5 is %d\n", sum);


    return 0;
}
