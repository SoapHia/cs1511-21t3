// Tutorial 5, Q4
// Author: Sophia Lin
// Date: 2021
//
// Description:
// Write a function that takes in a 2D array of ints and multiplies every value in the array by a given integer.
#include <stdio.h>

#define NUM_ROWS 4
#define NUM_COLS 3

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);

void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main(void) {

  int mat[NUM_ROWS][NUM_COLS] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

  printf("Before:\n");
  print_matrix(NUM_ROWS, NUM_COLS, mat);

  scalar_multiply(NUM_ROWS, NUM_COLS, mat, 3);
  
  printf("After:\n");
  print_matrix(NUM_ROWS, NUM_COLS, mat);

  return 0;
}

// Performs scalar multiplication.
// Takes in a 2d array, its dimensions and a scalar.
// Multiplies all integers in the matrix by given scalar.
void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    // loop through every row and every column
	int row = 0;
	int col = 0;
	
	while (row < rows) {
		// reset column
		col = 0;
		while (col < columns) {
		    matrix[row][col] = matrix[row][col] * scalar;
		    
			col++;
		}
		row++;
	}	
}

// Prints a matrix (2D array) to terminal.
void print_matrix(int rows, int columns, int matrix[rows][columns]) {

	// we will loop through every row and every column
	int row = 0;
	int col = 0;
	
	while (row < rows) {
		// reset column
		col = 0;
		while (col < columns) {
			printf("%d ", matrix[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}	
}	
