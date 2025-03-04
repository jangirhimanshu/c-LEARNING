/*
THE CONTINUE STATEMENT IN C
The ‘continue’ statement is used to immediately move to the next iteration of the loop.
The control is taken to the next iteration thus skipping everything below “continue”
inside the loop for that iteration.
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 5)
        {
            continue; // skip the iteration at i=5
        }
        printf("i is %d\n", i);
    }

    printf("For loop is done!");

    return 0;
}