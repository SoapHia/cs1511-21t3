/*
   Prints a vertical line of asterisks depending on user input.
*/

#include<stdio.h>

int main(void) {

    int number;
    printf("Enter number: ");
    scanf("%d", &number); // number = -100
    
    int count = 0;
    while (count < number) {        
        printf("*\n");
        count++; 
    }
    return 0;
}
