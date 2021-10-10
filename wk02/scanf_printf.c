// Demonstrates how scanf has similar syntax to printf
#include<stdio.h>

int main(void) {
    // print out a variable called a with value 12
    
    int a = 12;
    printf("%d", a);	
    
  
    // scan in a variable called b.  
    printf("Please enter: ");
    
    int b;
    scanf("%d", &b);
    
    printf("You entered: %d\n", b);


    return 0;
}
