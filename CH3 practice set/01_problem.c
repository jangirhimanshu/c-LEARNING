/*
What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");

*/

#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
    return 0;
}
/*
explain:
In the condition if (a = 11), a = 11 is an assignment rather than a comparison. 
This assigns the value 11 to a, and the expression a = 11 evaluates to 11, which is non-zero. In C, any non-zero value is considered true.

Note:
To correctly compare a to 11, you should use ==:

if (a == 11)
    printf("I am 11");
else
    printf("I am not 11");


*/