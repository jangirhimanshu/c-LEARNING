// IT IS NESTED LOOP
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) //also try int j =5; <<-- its prints maximum 5 star in sigle line at int j=5;...
        {
           printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
