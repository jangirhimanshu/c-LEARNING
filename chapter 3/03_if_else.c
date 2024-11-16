// 3) if-else statement

#include <stdio.h>

int main(){
    int age = 5;

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    else{
        printf("Your age is not greater than 10");
    }
    return 0;
}
// IF meaning agar.
// ELSE meaning varna.
/*
in a code 
-->age>10 is follow age = 5 then print (We are inside if,Your age is greater than 10) and not print (Your age is not greater than 10)
   age>10 is not follow age = 5 then print (Your age is not greater than 10) and not print (We are inside if,Your age is greater than 10)
-->it means if ka statement print hoga to else ka nhi hoga,
   aur else ka statement print hoga to if ka nhi hoga.
-->it means only one statement can print in if-else statement.
*/
