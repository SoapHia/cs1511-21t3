// Tutorial 5, Q1
// Author: Sophia Lin
// Date: 2021
//
// Description:
// Implementation of the only valid function.
#include <stdio.h>

#define SIZE1 5
#define SIZE2 5

// Always define true/false as constants
#define TRUE 1
#define FALSE 0

int test_all_positive(int length, int nums[]);

int main(void) {
  int n1[SIZE1] = {1,2,3,4,5};
  int n2[SIZE2] = {1,-2,3,4,5};

  printf("n1 result = %d\n", test_all_positive(SIZE1, n1));
  printf("n2 result = %d\n", test_all_positive(SIZE2, n2));

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
// Test that all intergers in an array is positive.
// Takes in an array and its length.
// Returns 1 or 0 as true or false.
int test_all_positive(int length, int nums[]) {
  int is_positive = TRUE;

  int index = 0;
  while (index < length) {
    if (nums[index] < 0) {
      is_positive = FALSE;
    }

    index++;
  }

  return is_positive;
}