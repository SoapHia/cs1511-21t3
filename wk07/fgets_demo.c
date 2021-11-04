#include <stdio.h>

#define N 6

int main(void) {

    char buffer[N];
    fgets(buffer, N, stdin); 
    printf("fgets read in this: '%s'\n", buffer);
}
