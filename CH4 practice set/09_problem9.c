//9. Repeat question 8 using while loop.
#include <stdio.h>
int main()
{
    int product = 1, n, i = 1; // it is must important apply int product=1
    printf("which factorial could you print n:");
    scanf("%d", &n);

    while (i <= n)
    {
        product = product * i;
        i++;
    }
    printf("the factorial of n:%d", product);

    return 0;
}
