// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"


// Q10 Example of bad malloc
// struct node *create_new_node(int data) {
//     struct node *new = malloc(sizeof(struct node *));
//     new->data = data;

//     return new;
// }

// we are here!
struct node *create_new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

/*
Q11.
When tackling a linked list exercise, it's a good idea to consider the following questions:

- What cases do I need to consider? Some of the common cases to consider are:
    Number of nodes (ie empty list, list with one node, list with many nodes)
    Location in the list (ie, at the start/middle/end of the list)
- Do I need to iterate through a linked list?
    What loop condition(s) should I use?
    How many iterators do I need?
- Do I need to malloc/free memory?
*/

// struct node {
//     int          data;
//     struct node *next;
// };

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    // create the node
    struct node *new_node = create_new_node(data);

    // check if list is empty
    if (head == NULL) {
        return new_node;
    }

    // make a pointer to the head
    struct node *curr = head;

    // loop through list until we reach the last node
    while (curr->next != NULL) {
      curr = curr->next;
    }

    // curr should now be the last node in the list
    curr->next = new_node;

    // return og head
    return head;
}

struct node *delete_last(struct node *head) {
    return NULL;
}

struct node *copy(struct node *list) {
    return NULL;
}

struct node *list_append(struct node *first_list, struct node *second_list) {

    // 1->2->X
    // 3->X
    // 1->2->3->x
    struct node *curr1 = first_list;
    struct node *new_list_head = NULL;

    while (curr1 != NULL) {
        new_list_head = add_last(new_list_head, curr1->data);
        curr1 = curr1->next;
    }
    // we should be at the last node
    // Also loop through second list
    struct node *curr2 = second_list;

    while (curr2 != NULL) {
        new_list_head = add_last(new_list_head, curr2->data);
        curr2 = curr2->next;
    }

    return new_list_head;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(struct node *first_list, struct node *second_list) {
    return NULL;
}

void print_list(struct node *head) {
  struct node *curr = head;

  while (curr != NULL) {
    printf("%d -> ", curr->data);
    curr = curr->next;
  }
  printf("X\n");
}


void free_list(struct node *head) {
  struct node *curr = head;
  struct node *prev = NULL;

  // free the previous node as we loop through the list
  while (curr != NULL) {
    if (prev != NULL) {
      free(prev);
    }
    prev = curr;
    curr = curr->next;
  }

  // free the last node.
  if (prev != NULL) {
    free(prev);
  }

}