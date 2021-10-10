/* 
We want to hold the information about a particular time in the day. We need to know the hour, minute and whether or not it is AM or PM.

How do we define the struct?
How do we declare and initialise it?
How do we print the hour of the time?
How do we print it in the format: hh:mm [ap]m?
Hint: For part d, you may want to try using %02d instead of %d in a printf, and see what it does.

*/
#include <stdio.h>

struct time {
    int hour;
    int min;
    char am_pm; // this can be 'a' or 'p'
};

int main(void) {
   
    struct time current_time; 
    // "struct time" is the data type, current_time is the name of my variable
    
    current_time.hour = 9;
    current_time.min = 8;
    current_time.am_pm = 'a';

    // %02d will add a 0 in front if the integer is only one digit
    printf("%02d : %02d %cm \n", current_time.hour, current_time.min, current_time.am_pm);
    

    return 0;
}
