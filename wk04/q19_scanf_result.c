// Tutorial Week 4, Q19
// Demo to show the result of scanf
#include <stdio.h>

int main(void) {
    /*
    int input;
    int result = scanf("%d", &input);
    if (result == 0) {
        printf("result = %d, input = %d\n", result, input);
    } else {
        printf("Scanf was unsuccessful! or CTRL+D was pressed\n");
    }*/
    
    /*
    double input;
    int result = scanf("%lf", &input);
    printf("result = %d, input = %lf\n", result, input);
    */
    
    /*
    char input;
    int result = scanf("%c", &input);
    printf("result = %d, input = %c\n", result, input);
    */
    
    
    int input1;
    int input2;
    int result = scanf("%d %d", &input1, &input2);
    printf("result = %d, input1 = %d, input2 = %d\n", result, input1, input2);
    

    return 0;
}
