/* Write a program rectangle_area.c that scans in 2 integers 
    which are the side-length of a rectangle, 
    and then prints the area of the rectangle.
*/
#include <stdio.h>

int main(void) {
    int width;
    int height;
    
    printf("Enter width and height: ");
    scanf("%d %d", &width, &height);
    
    int area = width * height;
    printf("The area is: %d\n", area);
    
    return 0;
}
