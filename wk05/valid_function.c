// Tutorial 5, Q1
// Author: Sophia Lin
// Date: 2021
//
// Description:
// Attempt to implement each of the functions that may or may not be valid
// in the Week 5 tutorial.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

// returns the number of elements in the array nums.
int array_length(int nums[]);

// returns 1 if all elements of array nums are positive, otherwise returns 0.
int test_all_positive(int nums[]);

//  returns 1 if all elements of array nums are initialized, otherwise returns 0.
int test_all_initialized(int length, int nums[]);

// returns 1 if all elements of array nums are positive, otherwise returns 0.
int test_all_positive(int length, int nums[]);

int main(void) {

    int test_array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int test_array2[7] = {-6, 8, 1, -4, 3, 0, -4};

    return 0;
}

/*
 * Please write function comments on top of your function implementation!
 *
 * Guide for function comments :)
 * - one line for the description,
 * - one line for the inputs, and
 * - one line for the return value/output
 * at minimum. (more is fine!)
 */

// Gets the length of the array
// Takes in an array
// Returns the length of the array
int array_length(int nums[]) {

}

// Tests all values in the array are positive
// Takes in an array
// Returns 1 if each value is positive and 0 if not
int test_all_positive(int nums[]) {

}

// Tests all values in the array are initialised
// Takes in an array and its length
// Returns 1 if each value is initialised and 0 if not
int test_all_initialized(int length, int nums[]) {
    nums[0] = -1;
    if (nums[0] == 0) {
    
    }

}

// Tests all values in the array are positive
// Takes in an array and its length
// Returns 1 if each value is positive and 0 if not
int test_all_positive(int length, int nums[]) {
    int result = TRUE; // assume array is positive
    
    int i = 0;
    while (i < length) {
        if (nums[i] < 0) {
            result = FALSE;
        }        
        i++;
    }
    
    return result;
}
