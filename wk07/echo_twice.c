#include <stdio.h>

#define N 4096

int main(void) {

    char buffer[N];
    while (fgets(buffer, N, stdin) != NULL) {
        printf("%s", buffer);
        printf("%s", buffer);
    }
    return 0;
}

