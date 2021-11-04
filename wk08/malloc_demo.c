// Wk 8 tutorial, Q5-7
// Demo of how to use malloc
#include <stdio.h>

int *create_int_ptr();

int main(void) {
    int *main_ptr = create_int_ptr();

    return 0;
}

// Return an int * variable that points to memory allocated using malloc.
int *create_int_ptr() {
  int *ptr = malloc(sizeof(int)); // malloc returns an addr
  return ptr; // return address that we allocated
}