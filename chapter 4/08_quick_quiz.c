/*
Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.
Input: 4
Output:
1
2
3
4
*/
#include<stdio.h>
int main()
{
    int n , i=1;
    printf("where to print a natural number,n=");
    scanf("%d",&n);  // mistake &n mai & lagana mat bhulana....
    do
    {
        printf("the n natural number is %d\n",i);
        i++;
    } while (i<=n);
    

    return 0;
}
