#include<stdio.h>

int main(){
    int a; 
    scanf("%d", &a);//scanf("%d or %f or %c ", &a); <---- scanf is used for get values from the user and &a is address of a, <--- IMP LINE 
    printf("The value of a is %d", a);
    // %d is used for int values
    // %f is used for float values
    // %c is used for char values

    return 0;
}