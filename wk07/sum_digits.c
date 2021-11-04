#include <stdio.h>

int main(void) {

    int ch;
    int sum = 0;
    int digits = 0;
    
    ch = getchar();
    while (ch != EOF) {
    
        if (ch >= '0' && ch <= '9') {
            sum += ch - '0';
            digits += 1;
        }
        
        ch = getchar();
    }
    
    printf("Input contained %d digits which summed to %d", digits, sum);

    return 0;
}

