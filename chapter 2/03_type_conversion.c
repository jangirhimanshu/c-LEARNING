#include <stdio.h>

int main(){
    int a = 9;
    int b = 2;
    float c = a/b;
    int d = 6.7;
    printf("The value of a/b is %f\n", c);//it give wrong vale because int a /int b gives int value 
    /*
    float a = 9;
    int b = 2;
    float c = a/b; 
    if we use float a then we get true value that is 4.5
    */

    printf("The value of d is %d", d);// it give int value because we use int 
    return 0;
}