// 8.Write a program to calculate the factorial(eg:3!=3x2x1) of a given number using a for loop.
//factorial eg: 3!=3x2x1 ; n!=1x2x3x4x...xn; 0!=1
#include <stdio.h>
int main()
{
    int product = 1, n; // it is must important apply int product=1
    printf("which factorial could you print n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("the factorial of n:%d", product);
    return 0;
}
