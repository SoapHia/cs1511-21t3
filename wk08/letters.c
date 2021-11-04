// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"

int check_letter(char ch) {
    // Return true if ch is a letter, false otherwise
    if (isalpha(ch)) {
      return 1;
    } else {
      return 0;
    }
}