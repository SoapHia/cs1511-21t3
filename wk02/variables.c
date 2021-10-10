// Demo for basic variable usage.
#include <stdio.h>

// Constants: must be named with all capital letters, will stay the same
#define PI 3.1415

int main(void) {
     
    // int = Integer = whole numbers
    int num_1 = 2;
    
    // You can print them as many times as you want
    printf("Before: %d %d %d %d\n", num_1, num_1, num_1, -2);
    
    // You can do maths with them :D
    num_1 = num_1 + 1;
    printf("After: %d\n", num_1);
    
    // double = anything with decimal places
    double num_2 = 1.0000;
    
    printf("Double: %.2lf\n", num_2);
    
    // char = ascii characters
    int c = 'a'+1;
    printf("Character: %c\n", c);
    
    // Constants should be used to store constants
    int radius = 2;
    double circumference = 2*PI*radius;
   

    return 0;
}
