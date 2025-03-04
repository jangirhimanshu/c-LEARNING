/*
3) FOR LOOP:
The syntax of a typical ‘for’ loop looks like this:
for (initialize; condition test; increment or decrement)
{
//code;         / code of block/
}
• Initialize → Setting a loop counter to an initial value.
• Test → Checking a condition.
• code → executes  code of block 
• Increment → Updating the loop counter
*/

/*
EXPLAIN:
for (initialize; condition test; increment or decrement)
{
//code;   / code of block/
}
--->(1):initilize ho ga;for eg:i=0
--->(2):fir condition test ho ga;for eg:i<3
--->(3):fir code of block execute hoga;for eg: printf("%d\n", i);
printf("\n"); < imp line
--->(4): fir increment or decrement ho ga last mai..  < imp line 

(1)--->(2)--->(3)--->(4) executes like this 

*/

#include<stdio.h>
int main()
{
    int i=0;
    for (i=0; i<3; i++){
    printf("%d\n", i);   /* code of block*/
    printf("\n");
}
    
    return 0;
}
