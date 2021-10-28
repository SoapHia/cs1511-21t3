;/*
	This program demonstrates how to scan and print strings.
*/
#include<stdio.h>
#include<string.h> //This is where 'strlen' comes from

#define MAX_LEN 100

int main(void) {
    char s1[MAX_LEN]; 
    char s2[MAX_LEN];

    // =================== SCANNING STRINGS (fgets) ===================

    printf("Type input for fgets, then hit ENTER: ");
    // fgets reads from a source into a string for within the maximum length
    // stdin = standard input, meaning that we get the string input from the terminal
    // fgets will read input from stdin until you type ENTER, and then append '\0' at the
    // end of your string to indicate it has ended
    fgets(s1, MAX_LEN, stdin);
    s1[strlen(s1) - 1] = '\0'; // gets rid of the extra '\n' at the end


    // =================== SCANNING STRINGS (getchar) ===================
    // Remember: fgets returns a string, getchar returns a character

    printf("Type input for getchar, then hit CTRL+D: ");
    // Scanning one letter at a time
    // This is very inefficient - use fgets instead!!
    int i = 0;
    int c = getchar();

    // while we CTRL+D is not pressed, and the array is not filled
    while(i < MAX_LEN && c != EOF) {
        s2[i] = c; // store the last letter scanned
        c = getchar(); // scan the next letter
        i++;
    }
    // you have to add null character manually at the end coz it's not automatically done.
    s2[i] = '\0'; 

    // =================== PRINTING STRINGS ===================

	// Printing the string in one go.
    printf("\nYou entered:\n");
    printf("%s\n", s1);
    printf("%s\n", s2);

    // Alternate way to loop print string one character at a time
    // does the same thing as above, but in a loop
    // This is quite inefficient for printing a string, only use a loop if you need to.
    i = 0;
    while(s1[i] != '\0') {
        printf("%c", s1[i]);
        i++;
    }

    return 0;
}
