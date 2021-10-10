// Prints hello 10x
/* 
Question 5. 
What is a While Loop?

What are the three most important things that should happen in (almost) every while loop?

Write a while loop that prints out "hello" ten times.
*/

#include <stdio.h>

int main(void) {

    int count = 0;
    
    while (count < 10) {
        printf("hello\n");
        //count = count + 1;
        count++;
    }



    return 0;
}
