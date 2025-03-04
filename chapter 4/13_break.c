/*
THE BREAK STATEMENT IN C
The ‘break’ statement is used to exit the loop irrespective of whether the condition is
true or false.
*/

#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 1000; i++)
    {
        if (i == 5)
        {
            break; // at i=5 exit the loop
        }
        printf("i is %d\n", i);
        /*
        if (i == 5)
        {
            break; // at i=5 exit the loop
        }
        then output is
        i is 0
        i is 1
        i is 2
        i is 3
        i is 4
        i is 5
        */
    }
    printf("For loop is done!");
    return 0;
}
/*
agar i is 5 print karwana hai to break statement printf("i is %d\n", i); ke baad lagana hai....
*/