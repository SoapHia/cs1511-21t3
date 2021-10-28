;/*
	This program demonstrates how to use fgets.
*/
#include<stdio.h>
#include<string.h> //This is where 'strlen' comes from

#define MAX_LEN 100

int count_lowercase(char *word);

int main(void) {
    // Declare a string i.e. character array
    // This will allocate space to store MAX_LEN characters.
    char s[MAX_LEN]; 

    // fgets reads from a source into a string for within the maximum length
    // stdin = standard input, meaning that we get the string input from the terminal
    // fgets will read input from stdin until you type ENTER, and then append '\0' at the
    // end of your string to indicate it has ended
    fgets(s, MAX_LEN, stdin);

    // Note that this will print an extra '\n' at the end
    // So typing 'hello' + ENTER will store 'hello\n\0' into s
    printf("%s\n", s);

    // To get rid of the extra new line at the end, we can edit the string 
    // to end earlier
    s[strlen(s) - 1] = '\0'; 
    printf("input without new line: %s\n", s);

    // How to read until EOF?
    while (fgets(s, MAX_LEN, stdin) != NULL){
        printf("%s\n", s);
        printf("num lc: %d\n", count_lowercase(s));
    }

    printf("byeeee\n");

    return 0;
}

// This is also acceptable provided that you know 
// what the MAX_LEN is.
// int count_lowercase(char word[MAX_LEN])
int count_lowercase(char *word) {
    int i = 0;
    int num_lowercase = 0;

    while (word[i] != '\0') {
        if(word[i] >= 'a' && word[i] <= 'z') {
            num_lowercase++;
        }
        i++;
    }
    return num_lowercase;
}