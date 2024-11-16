/*  DECISION MAKING INSTRUCTIONS IN C
• if–else statement
• switch statement  */

// #if-else statement
// TYPES OF IF-ELSE STATEMENT
// 1) if statement
#include <stdio.h>

int main(){
    int age = 5;

    if(age>10){  // 5 is not greater then 10
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");  // agar int age = 15 karte hai to ye dono print hoge.. 
    }
    // output kuch bhi nhi aaya because condition age=5 is not follow age>10,means 5 is not greater then 10
    return 0;
}

/*  IF ke ander ki statement tab hi print ho gi jab IF ki condition(age>10) follow karegi <<--- IMP LINE */ 