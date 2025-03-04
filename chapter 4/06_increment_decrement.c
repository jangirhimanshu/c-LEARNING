#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; 
    printf("The value of i is %d\n", i);  // print 10 ho ga

    printf("The value of i is %d\n", i++); // print 10 ho ga
    printf("The value of i is %d\n", i); //print 11 ho ga
    i++; // wnen we replace i++ to ++i its is also print 12  
    printf("The value of i is %d\n", i); // print 12
    
    // i++ prints i first and then increments i (Post increment Operator)
    // ++i increments i first and then prints i (Pre increment Operator)

    // i-- prints i first and then decrement i (Post decrement Operator)
    // --i decrement i first and then prints i (Pre decrement Operator)


    i +=2; // Same as i = i + 2;
    printf("The value of i is %d\n", i); // print 14

    return 0;
}