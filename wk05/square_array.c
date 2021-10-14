// Tutorial 5, Q3
// Author: Sophia Lin
// Date: 2021
//
// Description:
// Create a 7x7 square array, and print it to the terminal

#include <stdio.h>

#define SIZE 7

int main(void) {
    /*int row, column;

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("1");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }*/


    // Change above code so that a 2D array of ints is created 
    // and each element is given the value of 1.

    int square[SIZE][SIZE];
    
    // Set all positions to 1
    int row, column;
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            square[row][column] = 1;
        
            column = column + 1;
        }
        
        row = row + 1;
    }
    
    // Print out this array so it looked the same as the original output.
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d", square[row][column]);
        
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    // What are the benefits of storing the values of the grid in a 2D array?
    // Flexibility :) You can modify the array at specific indices
    // You can also pass the array around + into functions
    

    return 0;
}
