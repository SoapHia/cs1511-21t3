// Demo of how to work with pointers

#include<stdio.h>

int main(void) {
	
	int n = 1; // stores 1 into a specific location in memory

	int *p = &n; // &n = address of location where n is stored

	// 1. What will this print?
	printf("n = %d\n", n); // 1
	printf("p = %p\n", p); 
	printf("*p = %d\n", *p); 

	*p = 3; 

	printf("\nAfter *p = 3:\n");
	// 2. What will this print?	
	
	printf("n = %d\n", n); 
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	n = 5;

	printf("\n*After n = 5:\n");
	// 3. What will this print?	
	printf("n = %d\n", n);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	// 4. Arrays
	printf("\nArrays are passed around like pointers.\n");
	int arr[3] = {1,2,3};
	printf("Content at arr[0]: %d\n", arr[0]);
	printf("Address of array: %p\n", arr);

	return 0;
}
