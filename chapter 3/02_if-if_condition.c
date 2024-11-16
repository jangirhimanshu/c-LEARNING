
// 2) if-if statement  
// we can use more then one IF,you can use as many as needed
#include <stdio.h>

int main()
{
    int age = 15;

    if (age > 10)
    {
        printf("We are inside if\n");                //<<--- statement
        printf("Your age is greater than 10\n");     
    }
    if (age % 2 == 0) // %(modules) <--- this operator get a remainder of division and == <-- is the relational operator
                      // agar if (age % 5 == 0) karte hai to ye dono print hoge.........
    {                 
        printf("We are inside another if\n");       //<<--- statement
        printf("Your age is divisible by 2\n");    
    }
    return 0;
}

/*
sare if ki condition check hogi or jo if ki condition follow karegi usiki ka statement print hogi <<--- IMP LINE
*/