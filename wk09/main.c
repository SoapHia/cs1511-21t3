// Tutorial 09
// program to test list.c, list.h
#include<stdio.h>

#include "list.h"

int main(void) {
  // create empty list
  struct node *list1 = NULL;

  // add some nodes
  list1 = add_last(list1, 1);
  list1 = add_last(list1, 2);


  // create empty list
  struct node *list2 = NULL;
  // add some nodes
  list2 = add_last(list2, 3);
  // print to check
  
  print_list(list1);
  print_list(list2);

  struct node *list3 = list_append(list1, list2);
  print_list(list3);

  
  return 0;
}
