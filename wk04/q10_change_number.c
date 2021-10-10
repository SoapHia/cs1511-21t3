#include <stdio.h>

void change_number(int num);
int add(int left, int right);

int main(void) {

    int num; // (main) num
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function: %d\n", num);
    change_number(num);
    printf("After function: %d\n", num);
    
    printf("1+2 = %d\n", add(1,2));
    printf("1+num = %d\n", add(1, num));

    return 0;
}

// Change the given variable "num" to be the value 10
void change_number(int num) { 
    num = 10;
    int n = add(1,2);
}

int add(int left, int right) {
    int sum = left + right;
    return sum;
}
