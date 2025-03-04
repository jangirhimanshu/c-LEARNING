//2. Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>
int main()
{
    int n=10;
   
    for (int i = 10; i >= 1; i--)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }

    return 0;
}
/*
also write as like this for taking value from the user
#include <stdio.h>
int main()
{
    int n;
    printf("which table could you print:");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }

    return 0;
}
*/
