/*
#LOGICAL OPERATORS
--> &&, || and !, are three logical operators in C. These are read as “AND”, “OR” and “NOT”
--> They are used to provide logic to our C programs.
# USAGE OF LOGICAL OPERATORS:
-->1. && (AND) → is true when both the conditions are true
   a. “1 and 0” is evaluated as false. // true and false -->false
   b. “0 and 0” is evaluated as false. // false and false -->false
   c. “1 and 1” is evaluated as true.  // true and true -->true
-->2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1),(1 or 1 → 1) // (true or false -->true),(true or true -->true)
-->3. ! (NOT) → returns true if given false and false if given true , true ka false or false ka true
   a. !(3==3) → evaluates to false
   b. !(3>30) → evaluates to true.
-->As the number of conditions increases, the level of indentation increases. This reduces
   readability. Logical operators come to rescue in such cases.
*/   
// example of logical operator
#include <stdio.h>

int main(){
    int a=1 ; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    int c=0; int d=1;
    printf("\n");
    printf("\n");
    printf("The value of a and b is %d\n", c&&d);
    printf("The value of a or b is %d\n", c||d);
    printf("The value of not(c) is %d\n", !c);

    
    int e=1; int f=0;
    printf("\n");
    printf("\n");
    printf("The value of a and b is %d\n", e&&f);
    printf("The value of a or b is %d\n", e||f);
    printf("The value of not(e) is %d\n", !e);


    int g=0; int h=0;
    printf("\n");
    printf("\n");
    printf("The value of a and b is %d\n", g&&h);
    printf("The value of a or b is %d\n", g||h);
    printf("The value of not(g) is %d\n", !g);
    


    if(a && b){                // agar int mai a ya b ki koi ak ya dono value 0 kar te hai to (both are same) print nhi ho ga
        printf("both are true\n");  
    }
     // is same as writing ....
    if(a){             // agar int mai a ya b ki koi ak ya dono value 0 kar te hai to (both are same) print nhi ho ga     
        if(b){
            printf("both are true");
        }
    }
/*is same as writing .... means 
    if(a && b){
        printf("both are true\n");
    } 
    and
    if(a){
        if(b){
            printf("both are true");
        }
    }
    they both are same
    */
    return 0;
}