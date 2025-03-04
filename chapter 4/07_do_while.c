/*
2. do while loop
*/
/*
SYNTAX:
do {
//code;
} while (condition);
*/
#include<stdio.h>
int main()
{
   int i=0;
   do
   {
    printf("the value of i is %d\n",i);
    i++;
   } while (i<10);
   
    return 0;
}

/*
Flowchart:
1)Execute the code inside the do block.
2)Check the condition in the while statement.
3)If the condition is true, repeat the loop of inside the do.
4)If the condition is false, exit the loop and print that whats inside the while.

*/
/*
• ‘while’ checks the condition & then executes the code.
• ‘do-while’ executes the code & then checks the condition.  very very imp
*/