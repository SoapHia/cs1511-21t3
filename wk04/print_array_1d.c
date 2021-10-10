// This is a demo program to practice scanning to and printing a 1D array.
#include<stdio.h>

// We define the size here because it is a constant, so
// it will never change through this program.
#define SIZE 10

void print_array(int numbers[SIZE]);

int main() {   

	// initialise a 1D array	
	int arr[SIZE] = {0};
    
    // This should just print 10 zeros
	print_array(arr);
	
	int input;
	
	// Scan into array until the max size is reached, or CTRL+D/invalid input
	int i = 0;
	while (i < SIZE && scanf("%d", &input) == 1) {
	    arr[i] = input;
	    i++;
	}
	
	print_array(arr);
	

	return 0;
}


// Print the array with size 5
void print_array(int numbers[SIZE]) {
	int index = 0;

	while (index < SIZE) {
		printf("%d ", numbers[index]);

		index++;
	}

  	printf("\n");
}
