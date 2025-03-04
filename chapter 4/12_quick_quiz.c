#include<stdio.h>
int main()
{
    int i,n;
    printf("where to print a natural number in reverse order,n=");
    scanf("%d", &n);
    for (i = n; i >0; i--)
    {
        printf("the n natural number in reverse order is %d", i);
        printf("\n");
    }
    
    return 0;
}