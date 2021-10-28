/*
	Demo of how to create and use structs / struct pointers.
*/
#include<stdio.h>
#include<string.h>

#define MAX_NAME_LENGTH 100

// Structs are variable types that you can define
// which groups named variables together
struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

int main(void) {
	  // Q12. How would you create a variable, stu, which is a struct student?
    struct student stu;
	
    // Q13. How would you create a variable, stu_pointer, that points to this new struct?
    struct student * stu_pointer = &stu;
    
    // Q14. How would you give stu the following values by only using this new pointer?
    // zID: 5123456
    // wam: 74.7
    // name: Frankie
    (*stu_pointer).zID = 5123456;
    (*stu_pointer).wam = 74.7;
    strcpy((*stu_pointer).name,"Frankie"); // stu.name = "Frankie"

    // Q15. What is the use of the -> operator? Change the previous code to utilise it.
    stu_pointer->zID = 5123456;
    stu_pointer->wam = 74.7;
    strcpy(stu_pointer->name,"Frankie");

    printf("This student is:\n");
    printf("zID: %d\n", stu_pointer->zID);
    printf("wam: %lf\n", stu_pointer->wam);
    printf("name: %s\n", stu_pointer->name);

	  return 0;
}
