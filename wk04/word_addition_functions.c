// Remember the painful word additions?
// Look how good life is after functions
#include <stdio.h>

void print_number(int num);

int main(void) {

    int number1 = 2;
    int number2 = 3;

	print_number(number1);
	
	printf(" + ");
	
	print_number(number2);
	
	printf(" = ");
	
	print_number(number1 + number2);
	
	printf("\n");

    return 0;
}

// void because it just prints, nothing to pass back to caller
void print_number(int num) {
    if (num == 0) {
        printf("zero");
        
    } else if (num == 1) {
        printf("one");
        
    } else if (num == 2) {
        printf("two");
    
    } else if (num == 3) {
        printf("three");
        
    } else if (num == 4) {
        printf("four");
        
    } else if (num == 5) {
        printf("five");
        
    } else if (num == 6) {
        printf("six");
        
    } else if (num == 7) {
        printf("seven");
        
    } else if (num == 8) {
        printf("eight");
        
    } else if (num == 9) {
        printf("nine");
        
    } else if (num == 10) {
        printf("ten");
        
    } else { 
        printf("%d", num);
    }
}

