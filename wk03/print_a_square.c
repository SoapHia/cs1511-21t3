// The following code provides a detailed description on how to print a square.
#include <stdio.h>

int main(void) {
    // To iterate(cycle) through each row and column, we will need two variables.
	// These variables will be 0-indexed (start at zero) as we refer to the first row and first column as row 0 and col 0
	int row = 0;
    int col = 0;
	int size_of_square = 5;
	
	// The first while is used to loop through the number of rows we want to print.
	while(row < size_of_square) {
		// We reset column to start printing at column 0.
		col = 0;
		
		// For each row, we would like to print 0 to size_of_square number of columns.
		// So we will need another while loop to loop through columns.
		while(col < size_of_square) {
		    printf("*");
			col++; // increment column by 1.  	
		}

		// After we print out a row of stars, we would like to move on to the next line.
		printf("\n");

		row++; // increment row by 1.
	}
}
