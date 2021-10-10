/*
Write a C program range7.c which reads 2 integers n and m, 
and then prints the integers between n and m (including n and m) 
which are divisible by 7.

Hint: if x is divisible by 7, then x % 7 == 0
*/

#include<stdio.h>

int main(void){

    // Scan in integers
    int n;
    scanf("%d", &n);
    
    int m;
    scanf("%d", &m);
    
    // print from n to m
    int count = n;
    
    while (count <= m) {  
        if (count % 7 == 0) {
            printf("%d\n", count);
        }
        count++; 
    }


    return 0;
}
