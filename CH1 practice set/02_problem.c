#include <stdio.h>

int main(){
    int r = 6;
    int height = 10;
    printf("The area of circle with radius %d is %f\n", r, 3.14*r*r);
    // in upper line (radius %d) is used for r in that line and %f is used for 3.14*r*r(decimal value)
    printf("The volume of cylinder with radius %d and height %d is %f", r, height,  3.14*r*r*height);
    // in upper line (radius %d) is used for r and (height %d) is used for height and %f is used for 3.14*r*r*height 
    return 0;
}