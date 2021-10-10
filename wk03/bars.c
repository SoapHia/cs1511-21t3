// Q13
#include <stdio.h>

int main(void) {
    int number;
    int row, column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    // you can also start at row = 0, and change the 
    // while condition below to be while (row < number)
    row = 1; 
    while (row <= number) {
    
        column = 1;
        while (column <= number) {
            
            if (column % 2 == 0) {
                // print * if we are up to an even column
                printf("*");
            } else {
                // print - for everything else
                printf("-");
            }
            
            column = column + 1;
        }
        
        printf("\n");
        row = row + 1;
    }

    return 0;
}
