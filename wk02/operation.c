#include <stdio.h>

int main(void) {
    // int/int = int, so RHS will evaluate to 0, and then stored as 0.0    
    double result = 1 / 2; 
    printf("result: %lf\n", result);

    printf("%d\n", 1 / 2 * 500);
    printf("%.0lf\n", 1 / 2.0 * 500);
    
    printf("%d\n", (17 / 5) * 5 + (17 % 5));
    printf("%d\n", (12 - 17) % 6 - 4); // -5 % 6
    
    return 0;
}
