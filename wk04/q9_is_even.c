// Tutorial Week 4, Q9
// Create a function called is_even which takes in an integer 
// and returns 1 if it is an even number, and 0 if it is not.
#include<stdio.h>

int is_even(int num); 

int main(void) {
    // Version 1: No function
    
    int input;
    scanf("%d", &input);
    
    int result = 0;
    if (input % 2 == 0) {
        result = 1;
    } else {
        result = 0;
    }
    
    printf("Result = %d\n", result);
    
    // What if we want to do this again at a different location?
    // Without functions, we will need to copy paste 
    
    
    // Version 2: With Function    
    
    int input1;
    scanf("%d", &input1);
    
    int result = is_even(input1); 
    
    printf("Result = %d\n", result);
    
    // To use again, simply call the function
    
    int input2;
    scanf("%d", &input2);
    
    int result1 = is_even(input2);
    printf("Result = %d\n", result1);
    
    
    return 0;
}

// Takes a number as input, and returns 1 if is even, 0 if not
int is_even(int num) {
    int ret = 0;
    if (num % 2 == 0) {
        ret = 1;
    }
    
    return ret;
}
