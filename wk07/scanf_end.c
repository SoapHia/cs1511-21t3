#include <stdio.h>

int main(void) {
    
    char ch;
    int scanf_return = scanf("%c", &ch);
    printf("scanf returned %d\n", scanf_return);

    if (scanf_return == EOF) {
        printf("EOF was returned!\n");
    }

    return 0;
}
