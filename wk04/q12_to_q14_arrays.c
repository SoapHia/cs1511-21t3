// Tutorial Week 4, Q12-14
#include <stdio.h>

#define SIZE 7

void print_array(int array[], int size);

int main(void) {
    // Create an array called zeros of a size 7 
    // and initialise all of the elements to 0.
    int zeros[SIZE] = {0};
    
    // How do we print out all these elements to ensure they are all 0?
    print_array(zeros, SIZE);
    
    // How would we do the same thing 
    // but this time have the elements initialised to 1?
    int array1[100] = {0};
    print_array(array1, 100);
    
    int i = 0; // index/position in array
    
    while (i < 100) { // SIZE - 1
        array1[i] = 1;
        i++;
    }
    
    print_array(array1, 100);
   
    return 0;
}

void print_array(int array[], int size) {
    int i = 0; // index/position in array
    
    while (i < size) { // SIZE - 1
        printf("%d ", array[i]);
        i++;
    }
    
    printf("\n");
}
