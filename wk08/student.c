// Week 8 Tutorial, Q8 onwards
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME_LENGTH 100

// For this question, the following struct is defined:
struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];

    // an address to the next student in the list
    // or NULL if there are no more students
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {
    // Create some students and print out their details
    struct student *sophia = create_student(1234567, 80.9, "Sophia");
    // printf("Name: %s\n", sophia->name);
    // printf("zID: %d\n", sophia->zID);
    // printf("Mark: %lf\n", sophia->mark);

    struct student *harry = create_student(5000000, 71.3, "Harry");
    // printf("Name: %s\n", harry->name);
    // printf("zID: %d\n", harry->zID);
    // printf("Mark: %lf\n", harry->mark);

    // What is a linked list??
    // [harry]->X
    // [sophia]->X
    // harry->sophia->X
    harry->next = sophia;

    // How can we modify struct student to contain a pointer to another struct student?
    // Using the next pointer in the struct :D

    // How would we print out the zID of sophia by only using the harry variable?
    // printf("%s's ZID: %d\n", harry->next->name, harry->next->zID);

    // Having a linked list with 2 nodes is great, but what if we wanted to do 5? 
    // Add 3 more students to the linked list after the sophia node.
    struct student *lucy = create_student(321, 90, "Lucy");
    sophia->next = lucy;
    struct student *ray = create_student(123, 100, "Ray");
    lucy->next = ray;
    struct student *abhishek = create_student(567, 100, "Abhishek");
    ray->next = abhishek;
    
    // Our list should look like:
    // harry->sophia->lucy->ray->abhishek->X

    // If we wanted to print the name of all these students, how could that be done through only the harry variable?
    printf("Print out student's names\n");
    printf("%s ->", harry->name); // harry
    printf(" %s ->", harry->next->name); // sophia
    printf(" %s ->", harry->next->next->name); // lucy
    printf(" %s ->", harry->next->next->next->name); // ray
    printf(" %s ->", harry->next->next->next->next->name); // abhishek
    printf("X\n");

    struct student *head = harry;
    // Print out the list using a while loop
    struct student *curr = head; // i= 0
    while (curr != NULL) {
      printf("Name: %s\n", curr->name);
      printf("zID: %d\n", curr->zID);
      printf("Mark: %lf\n", curr->mark);
      printf("======\n");
      
      curr = curr->next;
    }

    return 0;
}

// creates a new struct student and return a pointer to it
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_stu = malloc(sizeof(struct student));
    new_stu->zID = zID;
    new_stu->mark = mark;
    strcpy(new_stu->name, name);
    new_stu->next = NULL;

    return new_stu;
}