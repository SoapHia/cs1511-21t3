/*
    Tute 3, q12
    Print a triangle
*/
#include <stdio.h>

int main(void) {
    int number;
    int row, column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    row = 1;
    // Loop through the rows
    while (row <= number) {
        
        // Loop through the columns
        column = 1;
        while (column <= number) {
            // This is the condition we found where asterisks should be printed
            if (column <= row) {
                printf("*");
            } else {
                printf("-");
            }

            // Go to the next column
            column = column + 1;
        }
        // Go to the next line
        printf("\n");
        row = row + 1;
    }

    return 0;
}
