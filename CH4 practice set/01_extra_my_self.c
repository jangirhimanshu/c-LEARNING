// IT IS NESTED LOOP
/*
#include <stdio.h>
int main()
{
    int n; // where n is number of rows
    printf("enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("i is %d  ",i);
        for (int j = 1; j <= i; j++)
        {
            printf("j is %d  ",j); // for print number in increasing order change this line to {printf("%d",j)} and remove {printf("i is %d  ",i);}(line11)
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
    printf("enter n:");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        printf("i is %d  ",i);
        for (int j = n; j >= i; j--) //also try int j =5; <<-- its prints maximum 5 star in sigle line at int j=5;...
        {
            printf("j is %d  ",j); // for print number in decreasing order change this line to {printf("%d",j)} and remove {printf("i is %d  ",i);}(line32)
        }
        printf("\n");
    }
    
    return 0;
}

